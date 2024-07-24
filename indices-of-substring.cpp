#include <iostream>
#include <vector>
#include <string>

auto findIndices(string text, string target) -> vector<int> {
    vector<int> indices;
    int prevLast = 0;
    while ((int last = text.find(target, prevLast)) != string::npos) {
        indices.push_back(last + 1);
        prevLast = last + 1;
    }
    return indices;
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