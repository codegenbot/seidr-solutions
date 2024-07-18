int main() {
    vector<int> input;
    int n;
    while (cin >> n) {
        input.push_back(n);
    }
    
    int sum = 0;
    for (int i = 0; i < input.size(); ++i) {
        sum += (input[i] / 3) - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}