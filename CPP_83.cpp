int starts_one_ends(int n) {
    int count = 0;
    count = (9 * n) / 10 + 10 - n;
    return count;
}

int main() {
    int n;
    cin >> n;
    int result = starts_one_ends(n);
    cout << result;
    return 0;
}