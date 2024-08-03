vector<int> findIndices(string text, string target) {
    vector<int> result;
    int index = 0;
    while (index < text.length()) {
        index = text.find(target, index);
        if (index == -1) break;
        result.push_back(index);
        index += target.length();
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}