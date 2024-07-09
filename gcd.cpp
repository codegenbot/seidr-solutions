```cpp
int findGCD(int a, int b) {
    if (b == 0) return std::abs(a);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return std::abs(b); 
}