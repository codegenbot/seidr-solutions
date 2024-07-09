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
        int evenIndex = 0;
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                std::partial_sort_copy(l.begin(), l.end(),
                    &result[evenIndex++], &result[i+1],
                    [](float a, float b){ return a<b; });
            } else {
                result[i] = l[i];
            }
        }
        return result;
    }
}

int main() {
    std::vector<float> input;
    for (int i = 0; i < 10; i++) {
        float x;
        std::cout << "Enter the value of element #";
        std::cin >> x;
        input.push_back(x);
    }

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