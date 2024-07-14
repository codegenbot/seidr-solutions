#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0; 
    while (pos != std::string::npos) {
        pos = text.find(target, pos); 
        if (pos != std::string::npos) {
            result.push_back(pos);
            pos += 1; 
        } else break;
    }
    return result;
}

int main() {
    std::string text = "your_text_here";
    std::string target = "your_target_here";
    std::vector<int> result = indicesOfSubstring(text, target);
    return 0;
}