int total = number + need;
    int left = max(remaining - need, 0);
    return {total, left};
}