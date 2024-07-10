int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> indices_of_substring(const string& text, const string& target) {
    vector<int> indices;
    int m = target.size();
    int n = text.size();

    for (int i = 0; i <= n - m; ++i) {
        int j;
        for (j = 0; j < m; ++j) {
            if (text[i+j] != target[j]) {
                break;
            }
        }
        if (j == m) {
            indices.push_back(i);
        }
    }

    return indices;
}