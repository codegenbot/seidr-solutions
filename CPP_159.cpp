int totalCarrots = number + remaining;
    int eatenCarrots = min(totalCarrots, need);
    int leftCarrots = max(totalCarrots - need, 0);
    return {eatenCarrots, leftCarrots};
}