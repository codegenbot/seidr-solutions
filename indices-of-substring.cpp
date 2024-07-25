int main() {
    string text, target;
    cin >> target >> text;

    int n = text.length();
    int m = target.length();

    vector<int> indices;
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    for (int idx : indices) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}