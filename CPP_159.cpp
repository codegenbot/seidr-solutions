int totalCarrots = number + remaining;
    int eatenCarrots = min(totalCarrots, need);
    return {eatenCarrots, max(0, totalCarrots - need)};
}