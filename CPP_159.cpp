int total = number + need;
    int carrotsEaten = min(total, remaining);
    int carrotsLeft = max(0, total - remaining);
    return {carrotsEaten, carrotsLeft};
}