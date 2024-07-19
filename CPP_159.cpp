int total = number + need;
    int eaten = (remaining >= need) ? total : total + (remaining - need);
    return {eaten, max(0, remaining - need)};
}