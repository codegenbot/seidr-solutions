int totalEaten = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - (need - min(need, remaining)));
    return {totalEaten, carrotsLeft};
}