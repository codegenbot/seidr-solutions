```cpp
#include <vector>
#include <string>

int main() {
    std::vector<int> indicesOfSubstring(std::string text, std::string target) {
        std::vector<int> result;
        for (int i = 0; ; i++) {
            size_t pos = text.find(target, i);
            if (pos == std::string::npos) break;
            result.push_back(pos);
            i = pos;
        }
        return result;
    }

    int main() {
        // Your indicesOfSubstring function remains unchanged here:
        std::vector<int> indicesOfSubstring(std::string text, std::string target) {
        ...
    }

    return 0;
}