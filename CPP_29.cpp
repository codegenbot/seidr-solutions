#include <vector>
#include <string>

bool areEqual(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> words, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(prefix) == 0) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    int n; 
    std::cin >> n;

    std::vector<std::string> words(n);
    for (auto &word : words) {
        std::cin >> word;
    }

    std::string prefix;
    std::cin >> prefix;

    auto filtered = filter_by_prefix(words, prefix);

    if (!areEqual(words, filtered)) {
        for (const auto& word : filtered) {
            std::cout << word << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "No words match the given prefix.\n";
    }

    return 0;
}