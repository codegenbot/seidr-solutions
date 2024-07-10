#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // skip over the matched substring
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string text;
    std::cin >> text;
    
    std::vector<int> indices = indicesOfSubstring(text, text.substr(0, n));
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}