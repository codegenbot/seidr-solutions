int main {
    assert(string_xor("0101", "0000") == "0101");
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;
    try {
        std::string result = string_xor(str1, str2);
        std::cout << "XOR of the two strings is: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;