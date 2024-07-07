int main
{
    int num1, num2;
    std::cout << "Enter two numbers (separated by a space): ";
    std::cin >> num1 >> num2;  
    int result = choose_num(num1, num2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}