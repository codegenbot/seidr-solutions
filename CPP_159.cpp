int totalEaten = number + min(need, remaining);
    int left = max(remaining - need, 0);
    return {totalEaten, left};
}