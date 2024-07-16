int total = number + need;
    int eaten = min(total, remaining);
    return { eaten, max(remaining - eaten, 0) };
}