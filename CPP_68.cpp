```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

bool sameVector(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> pluck(const std::vector<int>& arr) {
    std::vector<int> result;
    size_t minEven = std::numeric_limits<size_t>::max(), minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEven);
    result.push_back(minIndex);

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

    std::vector<int> output;
    output.push_back(minEven);
    output.push_back(minIndex);

    if (output.empty()) {
        std::cout << "No even numbers found." << std::endl;
    } else {
        std::vector<int> test = {1,2,3};
        std::vector<int> expected = {2, 0};
        std::vector<int> actual = pluck(test);
        assert(sameVector(actual, expected));
        std::cout << "Minimum even number: " << output[0] << ", Index: " << output[1]
                  << std::endl;
    }

    return 0;
}