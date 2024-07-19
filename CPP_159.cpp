int total = number + need;
    int eaten = min(total, remaining);
    int left = max(0, remaining - total);
    return {eaten, left};
}