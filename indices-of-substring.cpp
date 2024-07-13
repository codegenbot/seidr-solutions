#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // skip the current match
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string text;
    for (int i = 0; i < n; ++i) {
        char c;
        std::cin >> c;
        if (i == 0) {
            text += c;
        } else {
            text += '\n';
            text += c;
        }
    }
    int m;
    std::cin >> m;
    std::string target;
    for (int i = 0; i < m; ++i) {
        char c;
        std::cin >> c;
        if (i == 0) {
            target += c;
        } else {
            target += '\n';
            target += c;
        }
    }
    auto res = indicesOfSubstring(text, target);
    for (int i : res) {
        std::cout << i << '\n';
    }
    return 0;
}