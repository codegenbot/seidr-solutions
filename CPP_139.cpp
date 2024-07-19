int special_factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * special_factorial(n-1) * special_factorial(n-2);
    }
}

int main() {
    assert(special_factorial(1) == 1);
    assert(special_factorial(3) == 6);
    assert(special_factorial(5) == 120);
    assert(special_factorial(6) == 720);
    // Add more test cases here as needed
    return 0;
}