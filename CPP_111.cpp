int main 
{
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    auto hist = histogram(s);
    if (issame(histogram("a"), hist)) {
        std::cout << "The input string is the same as 'a'\n";
    } else {
        std::cout << "The input string is not the same as 'a'\n";
    }
}