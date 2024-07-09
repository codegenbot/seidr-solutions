```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& sub) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(sub) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    try {
        std::vector<std::string> words = {"grunt", "trumpet", "prune", "gruesome"};
        std::vector<std::string> result = filter_by_substring(words, "run");
        if (!issame(std::vector<std::string>(result.begin(), result.end()), {"grunt", "prune"})) {
            throw std::runtime_error("Error: Filtered words do not match expected output.");
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }
    return 0;
}