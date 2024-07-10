int main() {
    char text[256];
    std::cout << "Enter a string: ";
    std::cin >> text;
    std::cout << myString_to_md5(text) << std::endl;
}