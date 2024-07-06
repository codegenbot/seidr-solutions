int main 
{
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    bool result = is_nested(str);
    if(result)
        std::cout << "The string is nested";
    else
        std::cout << "The string is not nested";
    return 0;
}