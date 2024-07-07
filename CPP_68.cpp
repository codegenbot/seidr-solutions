```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int minEven = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
        }
    }

    if (minEven != INT_MAX) {
        result.push_back(minEven);
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 0 && arr[i] == minEven) {
                result.push_back(i);
                break;
            }
        }
    }

    return result;
}

int main() {
    int* input = nullptr; size_t n;

    // Read input
    std::cout << "Enter the number of elements: ";
    std::cin >> n;  
    input = new int[n]; 
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> input[i];
    }

    // Process the array
    std::vector<int> output = pluck(input);

    if (output.empty()) {
        std::cout << "No even numbers found." << std::endl;
    } else {
        std::cout << "Minimum even number: " << output[0] << ", Index: " << output[1]
                  << std::endl;
    }

    delete[] input; // Don't forget to free memory

    return 0;
}