vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        n = (n % 2 == 0) ? n + 1 : n + 2;
        stones.push_back(n);
    }
    return stones;
}