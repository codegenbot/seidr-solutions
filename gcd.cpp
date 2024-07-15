int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> substringIndices(string text, string target) {
    vector<int> indices;
    for (int i = 0; i <= text.length() - target.length(); ++i) {
        bool found = true;
        for (int j = 0; j < target.length(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    return indices;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    
    int numStrings;
    cin >> numStrings;
    for (int i = 0; i < numStrings; ++i) {
        string text, target;
        cin >> text >> target;
        vector<int> result = substringIndices(text, target);
        for (int j = 0; j < result.size(); ++j) {
            cout << result[j] << " ";
        }
        cout << endl;
    }
    return 0;
}