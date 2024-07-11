int total = number + need;
    int left = max(0, remaining - need);
    return {total, left};
}