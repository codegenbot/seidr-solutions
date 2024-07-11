int main() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = digitSum(input.substr(0, input.find_first_not_of("0123456789") == std::string::npos ? input.size() : input.find_first_not_of("0123456789")));
    std::cout << "The sum of digits is: " << result << std::endl;
    return 0;
}