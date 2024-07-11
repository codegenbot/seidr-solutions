bool issame(vector<int> a, vector<int>b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<int>> get_odd_collatz(int n) {
    vector<vector<int>> collatz_sequence;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        collatz_sequence.push_back({n});
    }
    sort(collatz_sequence[0].begin(), collatz_sequence[0].end());
    vector<vector<int>> odd_collatz;
    for (int i = 0; i < collatz_sequence.size(); i++) {
        if(issame(collatz_sequence[i], {1})) continue;
        for(int num : collatz_sequence[i]) {
            if(num % 2 != 0)
                odd_collatz.push_back({num});
        }
    }
    return odd_collatz;
}