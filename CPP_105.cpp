```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i].size() != b[i].size()) 
            return false;
    return true;
}

std::vector<std::string> by_length(const std::vector<int>& arr) {
    std::vector<std::string> result;
    for (int num : arr) {
        int length = to_string(num).size();
        result.push_back(to_string(length));
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
    
    std::vector<std::string> lengthArr;
    for(int num : intArray) {
        int length = to_string(num).size();
        lengthArr.push_back(to_string(length));
    }
    // Test assertion
    std::vector<std::string> expected = {to_string(9).size(), to_string(4).size(), to_string(8).size()};
    assert(issame(expected, lengthArr));
    return 0;
}