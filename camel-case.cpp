int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s; // Declare s as a string
        std::cin >> s;
        std::cout << camelCase(s) << std::endl; // Prefix std::
    }
    return 0;
}