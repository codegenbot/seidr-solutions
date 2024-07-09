```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<int> by_length(const std::vector<int>& arr) {
    std::vector<int> result;
    for (int num : arr) {
        int length = to_string(num).size();
        result.push_back(length);
    }
    return result;
}

int main() {
    // User input
    std::vector<int> intArray = {};
    std::cout << "Enter the numbers separated by space: ";
    for (std::string str; std::getline(std::cin, str); ) {
        intArray.push_back(stoi(str));
    }
    
    std::vector<int> lengthArr = by_length(intArray);
    // Test assertion
    assert(issame({to_string(9).size(), to_string(4).size(), to_string(8).size()}, {2, 1, 2}));
    return 0;
}