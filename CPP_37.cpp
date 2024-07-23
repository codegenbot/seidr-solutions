```cpp
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            auto start = l.begin() + i;
            auto end = start + 1;
            vector<float> temp(start, end);
            sort(temp.begin(), temp.end());
            result.push_back(temp[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {2, 4, 5, 8, 11, 12, -10, -12, 23}));
    return 0;
}