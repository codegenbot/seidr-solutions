vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    while (index < text.length()) {
        size_t found = text.find(target, index);
        if (found != string::npos) {
            indices.push_back(found);
            index = found + 1;
        } else {
            break;
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}