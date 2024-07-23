#include <algorithm>
#include <vector>

bool sameFunc(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(),
          [&b](float x) { return std::abs(x - *std::min_element(b.begin(), std::bind2nd(std::less<float>(), x))) <= 1e-6; });
}

vector<float> sortEven(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even;
            for (float x : l) {
                if (x % 2 == 0) {
                    even.push_back(x);
                }
            }
            sort(even.begin(), even.end());
            result.push_back(*min_element(even.begin(), even.end()));
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(sameFunc(sortEven({5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f}), {-12.0f, 4.0f, 2.0f, 8.0f, 3.0f, 5.0f, 11.0f, 23.0f, 12.0f, -10.0f});
    return 0;
}