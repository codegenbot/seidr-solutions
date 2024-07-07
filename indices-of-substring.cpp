vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target)
            result.push_back(i);
    }

    vector<int> lps(m, 0);

    int j(0);
    computeLPSArray(target, lpos(lps), m);

    int pos = 0;
    while (pos + m - 1 <= n - 1) {
        if (text.substr(pos, m).compare(target) == 0)
            result.push_back(pos);
        pos += max(1, lps[j]);
        j = (j + 1);
    }

    return result;
}

void computeLPSArray(string target, vector<int>& lps, int m) {
    int length = 0;

    for (int i = 1; i < m;) {
        if (target[i] == target[length]) {
            length++;
            lps[i] = length;
            i++;
        }
        else if (length != 0)
            length = lps[level - 1];
        else
            lps[i] = 0;
            i++;
    }

}