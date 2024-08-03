int main_program() {
    std::string input;
    std::cout << "Enter the string to hash: ";
    std::cin >> input;

    std::string hashed = string_to_md5(input);
    std::cout << "MD5 Hash: " << hashed << std::endl;

    return 0;
}