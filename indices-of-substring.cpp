#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // increment pos to avoid overlapping
    }

    return result;
}

int main() {
    std::string text;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::string target;
    std::cout << "Enter the target: ";
    std::getline(std::cin, target);

    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}