int total = number + need;
    int carrotsLeft = max(0, remaining - need);
    return {total, carrotsLeft};
}