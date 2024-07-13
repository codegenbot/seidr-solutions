```cpp
int main() {
    int a = 12; 
    int b = 15;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}