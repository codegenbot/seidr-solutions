#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }

    return result;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        std::string text, target;
        std::cin >> text >> target;
        std::vector<int> indices = indicesOfSubstring(text, target);
        for (int idx : indices) {
            std::cout << idx << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}