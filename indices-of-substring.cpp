#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            result.push_back(i);
        }
    }
    return result;
}
int main() {
    string text = "abcdefghijklmnopqrstuvwxyz";
    string target = "bc";
    vector<int> indices = indicesOfSubstring(text, target);
    for (auto i : indices) {
        cout << i << ' ';
    }
    return 0;
}