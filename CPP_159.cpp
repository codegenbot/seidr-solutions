int totalEaten = number + remaining;
    int carrotsLeft = max(0, remaining - max(0, need - number));
    return {totalEaten, carrotsLeft};
}