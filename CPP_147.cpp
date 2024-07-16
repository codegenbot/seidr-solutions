int count = 0;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        a[i] = i * i - i + 1;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((a[i] + a[j] + a[k]) % 3 == 0) {
                    count++;
                }
            }
        }
    }
    
    return count;
}