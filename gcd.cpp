vector<int> indicesOfSubstring(const string &text, const string &target) {
    vector<int> result;
    int targetLen = target.length();
    for (int i = 0; ; i++) {
        if (i + targetLen > text.length()) break;
        int j = 0;
        for (; j < targetLen && text[i+j] == target[j]; j++);
        if (j == targetLen) result.push_back(i);
    }
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}