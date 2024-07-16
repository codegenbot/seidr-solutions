int total = number + remaining;
    int eaten = min(total, need);
    return {eaten, max(0, total - need)};
}