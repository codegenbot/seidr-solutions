int totalCarrots = number + remaining;
    int eatenCarrots = (totalCarrots >= need) ? need : totalCarrots;
    int leftCarrots = (totalCarrots >= need) ? totalCarrots - need : 0;
    return {eatenCarrots, leftCarrots};
}