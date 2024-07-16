int totalEaten = number + min(need, remaining);
    int leftCarrots = max(0, remaining - need);
    return {totalEaten, leftCarrots};
}