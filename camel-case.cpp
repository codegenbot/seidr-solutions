int main() {
    std::string str;
    while (std::cin >> str) {
        str += ' '; // Add space at the end
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}