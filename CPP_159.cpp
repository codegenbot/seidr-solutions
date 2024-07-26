int totalEatenCarrots = number + need;
    int carrotsLeft = max(remaining - need, 0);
    return {totalEatenCarrots, carrotsLeft};
}