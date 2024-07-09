```
int main() {
    std::string s;
    while (true) {
        std::cout << "Enter a string in kebab-case (type 'q' to quit): ";
        std::cin >> s;
        if (s == "q") break;
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}