vector<int> stones;
    for (int i = 0; i < n; i++) {
        if (n % 2 == 0) {
            stones.push_back(n + i * 2);
        } else {
            stones.push_back(n + i * 2 + 1);
        }
    }
    return stones;