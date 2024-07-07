int main() {
    int num1, num2;
    std::cout << "Enter two numbers (separated by a space): ";
    std::cin >> num1 >> num2;  
    int result = choose_num(num1, num2);
    if(result == -1) {
        std::cout << "Error: Both numbers must be odd." << std::endl;
    } else {
        std::cout << "Result: " << (result % 2 == 0 ? "even" : "odd") << std::endl;
    }
    return 0;
}