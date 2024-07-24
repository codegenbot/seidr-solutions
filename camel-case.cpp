int main() {
    std::string str;
    str.clear();
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}