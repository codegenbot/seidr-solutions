```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> strings1 = {"apple", "banana", "cherry"};
    std::vector<std::string> strings2 = {"apple", "banana", "date"};

    if (issame(vector<string>(filter_by_substring(strings1, "an")), vector<string>(filter_by_substring(strings2, "an")))) {
        std::cout << "The two filtered vectors are the same." << std::endl;
    } else {
        std::cout << "The two filtered vectors are not the same." << std::endl;
    }

    return 0;
}