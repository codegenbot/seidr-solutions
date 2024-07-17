int main() {
    std::string str;
    while (std::cin >> str) {
        str += ' '; 
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}