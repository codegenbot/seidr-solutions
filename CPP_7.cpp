int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> result = filterBySubstring(str, "run");
    for (const auto& s : result) {
        if (!issame({s}, {"grunt", "prune"})) {
            return 1;
        }
    }
}