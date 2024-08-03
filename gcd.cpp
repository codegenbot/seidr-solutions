vector<int> findIndices(const string& text, const string& target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            indices.push_back(i);
            // check if the target string overlaps itself
            while (i + m < n && text.substr(i, m) == target) {
                i += m;
            }
        }
    }

    return indices;
}

int greatestCommonDivisor(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return greatestCommonDivisor(b, a % b);
    }
}