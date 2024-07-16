int total = number + need;
    int eaten = total >= remaining ? remaining : total;
    int left = remaining >= total ? remaining - total : 0;
    return {eaten, left};
}