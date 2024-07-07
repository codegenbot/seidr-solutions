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
    int a = 12;
    int b = 15;
    std::cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << std::endl;
    return 0;
}