#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // to avoid infinite loop
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::vector<int> indices = indicesOfSubstring(s, s.substr(0, n));

    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}