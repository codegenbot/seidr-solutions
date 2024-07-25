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
    // Your code to read input and print output
    std::string text;
    int n;
    std::cin >> text >> n;

    for (int i = 0; i < n; ++i) {
        std::string target;
        std::cin >> target;

        std::vector<int> indices = indicesOfSubstring(text, target);

        for (int index : indices) {
            std::cout << index << " ";
        }
        std::cout << "\n";
    }

    return 0;
}