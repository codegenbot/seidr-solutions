int totalEaten = number + remaining;
    int carrotsLeft = max(0, remaining - (need - number));
    return {totalEaten, carrotsLeft};
}