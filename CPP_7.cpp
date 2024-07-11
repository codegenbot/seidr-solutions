bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> filtered_words = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");

    for (const auto& word : filtered_words) {
        std::cout << word << std::endl;
    }
    return 0;
}