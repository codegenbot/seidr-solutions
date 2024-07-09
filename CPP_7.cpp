```c
bool compare(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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
    std::vector<std::string> result = filter_by_substring(std::vector<std::string>{"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(compare(std::vector<std::string>(result.begin(), result.end()), {"grunt", "prune"}));
    return 0;
}