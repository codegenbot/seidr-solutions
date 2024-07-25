#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // skip the matched target
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::cout << "[";
    for (int i = 0; i < indicesOfSubstring(s, std::to_string(n)).size(); ++i) {
        if (i > 0) std::cout << ", ";
        std::cout << indicesOfSubstring(s, std::to_string(n))[i];
    }
    std::cout << "]\n";
    return 0;
}