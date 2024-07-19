int totalCarrots = number + remaining;
    int eatenCarrots = min(need, totalCarrots);
    int carrotsLeft = max(0, totalCarrots - need);
    
    return {eatenCarrots, carrotsLeft};
}