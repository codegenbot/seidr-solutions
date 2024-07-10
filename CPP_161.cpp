int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    std::string result = solve(s); 
    std::cout << "Result: " << result << std::endl;
}