int total = number + need;
    int eaten = min(total, remaining);
    int left = max(remaining - total, 0);
    return {eaten, left};
}