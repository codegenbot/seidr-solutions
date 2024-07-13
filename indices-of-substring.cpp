#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t textSize = text.length(), targetSize = target.length();
    
    for (size_t i = 0; i <= textSize - targetSize; ++i) {
        if (text.substr(i, targetSize) == target) {
            result.push_back(static_cast<int>(i));
        }
    }
    
    return result;
}

int main() {
    // Test cases
    std::cout << "[";
    for (const auto& idx : indicesOfSubstring("a", "a")) {
        std::cout << idx << " ";
    }
    std::cout << "]" << std::endl;

    std::cout << "[";
    for (const auto& idx : indicesOfSubstring("! !", " !")) {
        std::cout << idx << " ";
    }
    std::cout << "]" << std::endl;

    std::cout << "[";
    for (const auto& idx : indicesOfSubstring("r nm,xcnwqnd@#$fwkdjn3", "r")) {
        std::cout << idx << " ";
    }
    std::cout << "]" << std::endl;

    std::cout << "[";
    for (const auto& idx : indicesOfSubstring("hihihihihihihihihihi", "hi")) {
        std::cout << idx << " ";
    }
    std::cout << "]" << std::endl;

    std::cout << "[";
    for (const auto& idx : indicesOfSubstring("############", "#")) {
        std::cout << idx << " ";
    }
    std::cout << "]" << std::endl;
    
    return 0;
}