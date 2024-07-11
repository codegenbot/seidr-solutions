#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int start = 0;
    
    while (start < text.size()) {
        size_t pos = text.find(target, start);
        
        if (pos == std::string::npos) break;
        
        result.push_back(pos);
        start = pos + target.size();
    }
    
    return result;
}

int main() {
    std::string text;
    int n;
    std::cin >> text >> n;
    for (auto i : indicesOfSubstring(text, text.substr(0, n))) {
        std::cout << i << "\n";
    }
    return 0;
}