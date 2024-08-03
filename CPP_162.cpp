int main() {
    std::string input;
    std::cin >> input;
    std::cout << string_to_md5(input) << std::endl;
    return 0;
}