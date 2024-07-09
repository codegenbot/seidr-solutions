int multiply(int a, int b) {
    return (a % 10) * (b % 10);
}

int main() {
    assert(multiply(0, 0) == 0);
}