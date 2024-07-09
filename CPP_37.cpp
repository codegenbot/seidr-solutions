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
                auto it = std::max_element(l.begin(), l.end()); // Changed minmax to max_element
                result[i] = *it;
                for(int j = 0; j < l.size(); j++){
                    if(j%2==0 && l[j] != *it){ // Changed (it.first) to (*it)
                        result[evenIndex++] = l[j];
                    }
                }
            } else {
                result[i] = l[i];
            }
        }
        return result;
    }
}

int cpp_main() { // Renamed main to cpp_main
    std::vector<float> input(10); 
    input.push_back(5);
    input.push_back(8);
    input.push_back(-12);
    input.push_back(4);
    input.push_back(23);
    input.push_back(2);
    input.push_back(3);
    input.push_back(11);
    input.push_back(12);
    input.push_back(-10);

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