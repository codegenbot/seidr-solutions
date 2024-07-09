int main
{
    std::string str, substring;
    std::cout << "Enter the string: ";
    std::getline(std::cin, str);
    std::cout << "Enter the substring: ";
    std::getline(std::cin, substring);
    int result = how_many_times(str, substring);
    std::cout << "The substring appears " << result << " times." << std::endl;
    return 0;
}