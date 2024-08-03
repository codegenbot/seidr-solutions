```cpp
#include <string>
#include <vector>
#include <set>

std::string find_max(std::vector<std::string> words) {
    std::string result = "";
    int max_unique_chars = 0;

    for (auto &word : words) {
        std::set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > max_unique_chars) {
            max_unique_chars = unique_chars.size();
            result = word;
        }
    }

    return result;
}

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry"};
    std::cout << find_max(words) << std::endl;
    return 0;
}