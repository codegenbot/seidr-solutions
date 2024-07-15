int starts_one_ends(int n) {
    int count = 0;
    count = (n / 10) * 9 + 10 - n;
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n) << endl;
    return 0;
}