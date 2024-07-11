```cpp
#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string result = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    return result;
}

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry"};
    std::cout << find_max(words) << std::endl;
    return 0;
}