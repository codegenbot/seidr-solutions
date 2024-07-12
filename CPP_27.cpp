int main
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Flipped case: " << filp_case(input) << std::endl;
    return 0;
}