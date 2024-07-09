```cpp
#include <algorithm>
#include <vector>

namespace myspace {
    bool issame(const std::vector<float>& a, const std::vector<float>& b) {
        if(a.size() != b.size()) return false;
        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    std::vector<float> sort_even(const std::vector<float>& l) {
        std::vector<float> result(l.size());
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                std::vector<float> evens;
                for (int j = 0; j < l.size(); j++) {
                    if (j % 2 == 0) {
                        evens.push_back(l[j]);
                    }
                }
                std::sort(evens.begin(), evens.end());
                result[i] = evens[0];
            } else {
                result[i] = l[i];
            }
        }
        return result;
    }
}

int main() {
    std::vector<float> input({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    std::cout << "Original array: ";
    for (float num : input) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<float> sortedEven = myspace::sort_even(input);
    std::cout << "Sorted even array: ";
    for (float num : sortedEven) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}