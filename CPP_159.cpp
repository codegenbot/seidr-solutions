int totalEaten = number + min(need, remaining);
    int carrotsLeft = max(remaining - need, 0);
    return {totalEaten, carrotsLeft};
}