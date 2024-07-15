int modp(int a, int b);

int main() {
    assert(modp(31, 5) == 3);
    return 0;
}

int modp(int a, int b) {
    return a % b;
}