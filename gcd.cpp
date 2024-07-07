```cpp
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else {
        int temp = gcd(b, a % b);
        while (a % temp != 0 && b % temp != 0) 
            temp--;
        return temp;
    }
}

int main() {
    int num1; // input values for testing
    std::cout << "Enter first number: ";
    std::cin >> num1;

    int num2; // input values for testing
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << std::endl;
    return 0;
}