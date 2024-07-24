#include <iostream>
#include <string>
#include <vector>

auto findIndices(string text, string target) -> vector<int> {
    vector<int> indices;
    int prevLast = 0;
    while ((int last = text.find(target, prevLast)) != string::npos) {
        indices.push_back(last);
        prevLast = last + 1;
    }
    return indices;
}

auto main() -> int {
    string text;
    cin >> text;

    string target;
    cin >> target;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;