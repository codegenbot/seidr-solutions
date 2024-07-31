int count = 0;
    for (int i = 1; i <= n; i++) {
        vector<int> a;
        a.push_back(i * i - i + 1);
        for (int j = 1; j < i; j++) {
            a.push_back(j * j - j + 1);
        }
        for (int k = 2; k < a.size(); k++) {
            if ((a[i - 1] + a[i - 2] + a[k]) % 3 == 0) {
                count++;
            }
        }
    }
    
    return count;
}