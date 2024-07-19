int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? totalCarrots - remaining : totalCarrots;
    int remainingCarrots = remaining > totalCarrots ? 0 : remaining - totalCarrots;
    return {eatenCarrots, remainingCarrots};
}