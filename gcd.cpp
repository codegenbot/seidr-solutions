vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = text.length();
    int tlen = target.length();

    for (int i = 0; ; i++) {
        if (i + tlen > len)
            break;

        if (text.substr(i, tlen) == target) {
            result.push_back(i);
            i += tlen - 1;
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