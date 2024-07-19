vector<int> stones;
    stones.push_back(n);
    while (n > 1) {
        if (n % 2 == 0) {
            n += 1;
        } else {
            n += 2;
        }
        stones.push_back(n);
    }
    return stones;