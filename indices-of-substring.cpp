#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != stdstring::npos) {
        result.push_back(pos);
        pos += target.size(); 
    }
    return result;
}

int main() {
    std::string text = "example"; // example input
    std::string target = "ex";     // example target
    auto result = indicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << std::endl;
    }
    return 0;
}