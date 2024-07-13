```cpp
int main() {
    int a = 48; 
    int b = 18;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}