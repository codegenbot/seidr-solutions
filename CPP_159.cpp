int main() {
    cout << "{";
    for (int i = 0; i < 3; i++) {
        vector<int> result = eat(i, 10 - i, 10);
        cout << result[0] << "," << result[1];
        if (i != 2) cout << ",";
        cout << endl;
    }
    return 0;
}