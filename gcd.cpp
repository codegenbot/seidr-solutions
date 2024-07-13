int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int m = text.size();
    int n = target.size();
    
    for (int i = 0; i <= m - n; ++i) {
        int j;
        for (j = 0; j < n; ++j) {
            if (text[i + j] != target[j]) {
                break;
            }
        }
        if (j == n) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}