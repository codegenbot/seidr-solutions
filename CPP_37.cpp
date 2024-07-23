#include <algorithm>
#include <vector>
#include <list>
using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(),
          [b](float x) { return abs(x - *min_element(b.begin(), b.end())) <= 1e-6; });
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            list<float> even;
            for (float x : l) {
                if (x % 2 == 0) {
                    even.push_back(x);
                }
            }
            sort(even.begin(), even.end());
            result.push_back(*even.rbegin());
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f}), {-12.0f, 4.0f, 2.0f, 8.0f, 3.0f, 5.0f, 11.0f, 23.0f, 12.0f, -10.0f});
    return 0;
}