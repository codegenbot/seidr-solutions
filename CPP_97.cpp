int multiply(int a, int b){
    return (a % 10) * (b % 10);
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "The multiplication result is: " << multiply(num1, num2) << std::endl;
    return 0;
}