vector<int> stones;
    int stonesCount = n;
    for (int i = 0; i < n; ++i) {
        stones.push_back(stonesCount);
        stonesCount += (n % 2 == 0) ? 2 : 1;
    }
    return stones;
}