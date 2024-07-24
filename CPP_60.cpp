int sum_to_n(int n) {
    return n * (n + 1) / 2;
}

int main() {
    assert(sum_to_n(100) == 5050);
    return 0;
}