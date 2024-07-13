int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> indices_of_substring(const string& text, const string& target) {
    vector<int> indices;
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (size_t j = 0; j < target.size(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (size_t j = 0; j < target.size(); ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}