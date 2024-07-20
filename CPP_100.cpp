vector<int> stones;
    int stones_count = n;
    for (int i = 0; i < n; ++i) {
        stones.push_back(stones_count);
        stones_count += (n % 2 == 0) ? 2 : 1;
    }
    return stones;
}