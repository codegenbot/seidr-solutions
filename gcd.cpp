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
    int num1 = 48; // input values for testing
    int num2 = 18;
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << std::endl;
    return 0;
}