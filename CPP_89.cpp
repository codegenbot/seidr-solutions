int main
{
    assert(encrypt("a") == "e");
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << "The encrypted string is: " << encrypt(s) << std::endl;
}