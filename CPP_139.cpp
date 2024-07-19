int special_factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * special_factorial(n-1) * special_factorial(n-2);
    }
}

int main() {
    assert(special_factorial(1) == 1);
    assert(special_factorial(2) == 2);
    assert(special_factorial(3) == 12);
    assert(special_factorial(4) == 144);
    return 0;
}