vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.length(), m = target.length();
    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            indices.push_back(i + 1);
            i += m - 1;
        }
    }
    return indices;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}