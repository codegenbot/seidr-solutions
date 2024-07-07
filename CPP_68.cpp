```cpp
#include <iostream>
#include <vector>

bool sameVector(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> pluck(const std::vector<int>& v) {
    std::vector<int> result = {v[0], v[1]};
    return result;
}

int mainFunction() {
    size_t n = 0;

    // Read input
    std::cout << "Enter the number of elements: ";
    std::cin >> n;  
    std::vector<int> input(n); 
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> input[i];
    }

    // Process the array
    size_t minEven = std::numeric_limits<size_t>::max(), minIndex = -1;

    for (int i = 0; i < n; i++) {
        if (input[i] % 2 == 0 && input[i] < minEven) {
            minEven = input[i];
            minIndex = i;
        }
    }

    std::vector<int> output = pluck({minEven, minIndex});

    if (output.empty()) {
        std::cout << "No even numbers found." << std::endl;
    } else {
        std::cout << "Minimum even number: " << output[0] << ", Index: " << output[1]
                  << std::endl;
    }

    return 0;
}