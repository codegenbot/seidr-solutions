int main() {
    std::string s;
    while (std::getline(std::cin, s, ' ')) {
        std::cout << camelCase(s) << '\n';
    }
    return 0;
}