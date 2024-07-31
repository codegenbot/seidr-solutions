int total = number + need;
    int eaten = min(total, remaining);
    return {eaten, max(0, total - remaining)};
}