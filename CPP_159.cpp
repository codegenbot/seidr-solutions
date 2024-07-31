int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? totalCarrots - remaining : totalCarrots;
    int leftCarrots = remaining >= totalCarrots ? 0 : remaining - number;
    
    return {eatenCarrots, leftCarrots};
}