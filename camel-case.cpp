int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}