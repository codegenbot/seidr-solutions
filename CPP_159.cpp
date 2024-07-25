int total = number + need;
    int eaten = (remaining >= need) ? total : total + (remaining - need);
    int left = (remaining >= need) ? remaining - need : 0;
    return {eaten, left};
}