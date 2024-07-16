int main() {
    vector<int> numbers;
    int n;
    while (cin >> n) {
        numbers.push_back(n);
    }

    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += (numbers[i] / 3) - 2;
    }

    cout << sum << endl;

    return 0;
}