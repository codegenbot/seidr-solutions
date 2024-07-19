int totalEatenCarrots = number + min(need, remaining);
    int remainingCarrots = max(0, remaining - need);
    return {totalEatenCarrots, remainingCarrots};
}