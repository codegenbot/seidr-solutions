vector<int> indicesOfSubstring(string text, string target) {
    vector<int> res;
    int pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        res.push_back(pos);
        pos += target.size();
    }
    return res;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}