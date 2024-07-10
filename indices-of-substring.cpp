#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // Look for the next occurrence right after the previous one
    }

    return result;
}

int main() {
    int numTextLines, numTargets;
    std::cin >> numTextLines >> numTargets;

    for (int i = 0; i < numTextLines; ++i) {
        std::string text;
        std::cin >> text;

        for (int j = 0; j < numTargets; ++j) {
            std::string target;
            std::cin >> target;
            std::vector<int> indices = indicesOfSubstring(text, target);
            for (int index : indices) {
                std::cout << index << " ";
            }
            std::cout << "\n";
        }
    }

    return 0;
}