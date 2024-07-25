int main() {
    vector<int> inputs;
    int n;
    while (cin >> n) {
        inputs.push_back(n);
    }

    int sum = 0;
    for (int i = 0; i < inputs.size(); ++i) {
        sum += (inputs[i] / 3) - 2;
    }

    cout << sum;

    return 0;
}