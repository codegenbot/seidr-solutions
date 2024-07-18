int totalEatenCarrots = number + need;
    int carrotsLeft = max(0, remaining - need);
    return {totalEatenCarrots, carrotsLeft};
}