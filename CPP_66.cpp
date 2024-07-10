int main() {
    std::cout << "Please enter a string: ";
    std::string s;
    std::cin >> s;
    int result = digitSum(s);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}