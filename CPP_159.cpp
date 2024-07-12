int total = number + need;
    int eaten = (remaining >= need) ? total : total - (need - remaining);
    
    return {eaten, max(0, remaining - need)};
}