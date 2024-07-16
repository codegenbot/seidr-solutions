int totalCarrots = number + need;
    int eatenCarrots = totalCarrots;
    if (totalCarrots <= remaining) {
        eatenCarrots = totalCarrots;
    } else {
        eatenCarrots = remaining;
    }
    return {eatenCarrots, remaining - eatenCarrots};
}