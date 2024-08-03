#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text = "exampletextexample";
    std::string target = "example";
    std::vector<int> indices;

    for (size_t i = 0; i <= text.length() - target.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }

    for (int index : indices) {
        std::cout << index << " ";
    }

    return 0;
}