int totalEaten = number + min(remaining, need);
    int remainingCarrots = max(0, remaining - (need - number));
    return {totalEaten, remainingCarrots};
}