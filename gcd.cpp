int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; i <= textLen - targetLen; ++i) {
        if (text.substr(i, targetLen) == target) {
            for (int j = 0; j < targetLen; ++j) {
                indices.push_back(i + j);
            }
        }
    }

    return indices;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    // Uncomment to test indicesOfSubstring function
    // string text, target;
    // cin >> text >> target;
    // vector<int> result = indicesOfSubstring(text, target);
    // for (int i = 0; i < result.size(); ++i) {
    //     cout << result[i] << " ";
    // }
    // cout << endl;

    return 0;
}