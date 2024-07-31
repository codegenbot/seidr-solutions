vector<int> cnt = {n >= 1, n >= 2}; // For 1 and 2
    for (int m = 1; m < 1000; m++) {
        string s = to_string(m);
        for (int i = s.size() - 2; i >= 0; i--)
            s += s[i];
        int x = stoi(s);
        if (x > n)
            break;
        cnt[x % 2]++;
    }
    return cnt;
}