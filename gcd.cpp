vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = text.length();
    int tar_len = target.length();

    for (int i = 0; i <= len - tar_len; i++) {
        if (text.substr(i, tar_len) == target) {
            result.push_back(i);
            while (i + tar_len < len && text.substr(i, tar_len) == target) {
                i += tar_len;
            }
        }
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}