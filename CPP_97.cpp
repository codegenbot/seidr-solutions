```cpp
int multiply(int a, int b) {
    int digit1 = a % 10;
    int digit2 = b % 10;
    return digit1 * digit2;

}
int main() {
    assert(multiply(0, 0) == 0);
    return 0;
}