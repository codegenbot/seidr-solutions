#include <iostream>
#include <string>
#include <vector>

namespace std {
template<typename T, typename A>
using vector = std::vector<T, A>;
}

int findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int prevLast = 0;
    while ((int last = text.find(target, prevLast)) != std::string::npos) {
        indices.push_back(last);
        prevLast = last + 1;
    }
    return indices.size();
}

int main() {
    std::string text;
    std::cin >> text;

    std::string target;
    std::cin >> target;

    std::vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}