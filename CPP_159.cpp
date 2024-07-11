int totalEaten = number + need;
    int carrotsLeft = max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}