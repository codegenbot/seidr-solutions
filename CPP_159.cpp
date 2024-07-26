int total = number + remaining;
    int eaten = min(total, need);
    int left = max(0, total - need);
    return {eaten, left};
}