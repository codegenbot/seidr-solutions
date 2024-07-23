```cpp
#include <algorithm>
#include <vector>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return (a.size() == b.size()) &&
           (a.size() == 0 || equal(a.begin(), a.end(), b.begin()));
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even;
            for (float x : l) {
                if (x % 2.0 == 0.0)
                    even.push_back(x);
            }
            sort(even.begin(), even.end());
            result.push_back(*even.begin());
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    vector<float> l = {5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f};
    vector<float> sorted = sort_even(l);
    if (!issame(sorted, {-12.0f, 4.0f, 2.0f, 8.0f, 3.0f, 5.0f, 11.0f, 23.0f, 12.0f, -10.0f})) {
        cout << "Test failed" << endl;
    }
    return 0;
}