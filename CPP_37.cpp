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
        std::vector<float> evens;
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                evens.push_back(l[i]);
            }
        }
        std::sort(evens.begin(), evens.end());
        int k = 0;
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                result[i] = evens[k++];
            } else {
                result[i] = l[i];
            }
        }
        return result;
    }
}

int main_function() {
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
    assert(myspace::issame(sortedEven, {2, 4, 8, 12})); 
    return 0;
}