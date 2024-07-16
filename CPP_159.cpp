int total = number + need;
    int eaten = (remaining >= need) ? total : total + remaining - need;
    int left = max(0, remaining - need);

    return {eaten, left};
}