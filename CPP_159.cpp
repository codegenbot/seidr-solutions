int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? remaining : totalCarrots;
    int leftCarrots = remaining - eatenCarrots;
    return {eatenCarrots, leftCarrots};
}