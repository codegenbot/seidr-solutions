#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (int j = 0; j < target.size(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string text, target;
    std::cin >> text >> target;

    for (const auto& index : indicesOfSubstring(text, target)) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}