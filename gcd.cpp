vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    while ((index = text.find(target)) != string::npos) {
        indices.push_back(index);
        if (text.length() - index <= target.length()) break;
        text.erase(0, index + target.length());
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}