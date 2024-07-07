#include <vector>
#include <algorithm>

std::vector<int> pluck(std::vector<int> v) {
    std::vector<int> result;
    for (int i : v) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
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

    std::vector<int> output(2); // Initialize with size and default values
    output[0] = minEven;
    output[1] = minIndex;

    if (output.empty()) {
        std::cout << "No even numbers found." << std::endl;
    } else {
        std::vector<int> test = {1,2,3};
        std::vector<int> expected = {2};
        std::vector<int> actual = pluck(test);
        if (actual == expected) {
            std::cout << "Minimum even number: " << output[0] << ", Index: " << output[1]
                      << std::endl;
        } else {
            std::cout << "Test failed." << std::endl;
        }
    }

    return 0;
}