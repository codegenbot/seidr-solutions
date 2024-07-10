#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int start = 0;
    
    while (start < text.size()) {
        size_t pos = text.find(target, start);
        
        if (pos != std::string::npos) {
            result.push_back(pos);
            start = pos + 1; // Move the starting position to the next character
        } else {
            break;
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