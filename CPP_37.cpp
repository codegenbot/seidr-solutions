```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    for(int i = 0; i < l.size(); i++) {
        if(i % 2 == 0) {
            std::vector<float> temp;
            for(float x : l) {
                if(x % 2.0 == 0.0) {
                    temp.push_back(x);
                }
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}