vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target)
            result.push_back(i);
    }

    int j = 0;
    while (j + m <= n) {
        size_t pos = text.find(target, j);
        if (pos != string::npos) {
            result.push_back(pos);
            j = pos + 1;
        } else
            break;
    }

    return result;
}