```cpp
int main
{
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::cout << "MD5: " << string_to_md5(text) << std::endl;
    return 0;
}