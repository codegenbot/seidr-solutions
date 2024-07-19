#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

void filter_by_substring(std::vector<std::string>& vec, const std::string& substr) {
    vec.erase(std::remove_if(vec.begin(), vec.end(), [substr](const std::string& s) {
        return s.find(substr) != std::string::npos;
    }), vec.end());
}

int main() {
    std::vector<std::string> words = {"apple", "banana", "orange", "grape"};
    filter_by_substring(words, "an");
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    return 0;
}