int main
{
    std::cout << "Enter a string: ";
    std::string text;
    std::cin >> text;
    std::cout << "Fixed string: " << fix_spaces(text) << std::endl;
    return 0;
}