vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLen = target.length();
    for (int i = 0; ; i++) {
        if (i + targetLen > text.length())
            break;
        bool found = true;
        for (int j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j])
                found = false;
        }
        if (found) {
            indices.push_back(i);
            i += targetLen - 1;
        } else
            i++;
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}