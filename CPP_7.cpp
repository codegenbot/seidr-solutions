bool checkStrings(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter(const std::vector<std::string>& str, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& s : str) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    auto result = filter(str, "run");
    
    for (const auto& s : result) {
        if (!checkStrings({s}, std::vector<std::string>({"grunt", "prune"}))) {
            return 1;
        }
    }
}