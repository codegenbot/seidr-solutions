vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int lastFound = -1;
    while (true) {
        size_t pos = text.find(target);
        if (pos == string::npos) break;
        result.push_back(pos);
        lastFound = pos;
        text.erase(0, pos + target.size());
    }
    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;