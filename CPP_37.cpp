```cpp
#include <algorithm>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float min = l[0];
            for (int k = 1; k <= i && k < l.size(); k += 2) {
                if (l[k] < min) min = l[k];
            }
            result[j++] = min;
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    std::vector<float> input({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    for (float num : sort_even(input)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}