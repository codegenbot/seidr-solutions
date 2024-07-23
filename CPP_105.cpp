```cpp
#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> by_length(std::initializer_list<int> lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        if (length == 4)
            result.push_back("Four");
        else if (length == 8)
            result.push_back("Eight");
        else
            result.push_back(std::to_string(length) + "Nine");
    }
    return result;
}

bool issame(std::vector<std::string> vec1, std::vector<std::string> vec2) {
    return vec1 == vec2;
}

int main() {
    if (issame(by_length({4, 8}), {"Four", "Eight"})) 
        std::cout << "Vectors are same." << std::endl; 
    else
        std::cout << "Vectors are not same." << std::endl; 
}