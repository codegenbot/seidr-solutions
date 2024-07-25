```
int multiply(int a, int b){
    return (a % 10) * (b % 10);
}

int main() {
    int a,b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int result = multiply(a,b);
    std::cout << "Product of last digits is : " << result << std::endl;
    return 0;
}