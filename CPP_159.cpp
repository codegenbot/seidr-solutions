int totalEatenCarrots = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - (need - (totalEatenCarrots - number)));
    return {totalEatenCarrots, carrotsLeft};
}