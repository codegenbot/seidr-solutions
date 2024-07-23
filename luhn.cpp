int main() {
    vector<int> v(16);
    for (int i = 0; i < 16; i++) {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if (i % 2 == 1) {
            int doubled = v[i] * 2;
            sum += (doubled > 9) ? (doubled - 9) : doubled;
        } else {
            sum += v[i];
        }
    }

    cout << sum << endl;
    
    return 0;
}