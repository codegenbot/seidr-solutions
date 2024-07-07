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
    long minEven = std::numeric_limits<long>::max(), minIndex = -1;

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

int main() {
    std::vector<int> input;
    size_t n;

    // Read input
    std::cout << "Enter the number of elements: ";
    std::cin >> n;  
    input.reserve(n);  // Use reserve instead of resize and provide the default allocator

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> (input[i]);
    }

    // Process the array
    std::vector<int> output = pluck(input);

    if (output.empty()) {
        std::cout << "No even numbers found." << std::endl;
    } else {
        std::cout << "Minimum even number: " << output[0] << ", Index: " << output[1]
                  << std::endl;
    }

    return 0;
}