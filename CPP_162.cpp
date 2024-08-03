int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string md5_hash = string_to_md5(input);
    std::cout << "MD5 Hash: " << md5_hash << std::endl;

    return 0;
}