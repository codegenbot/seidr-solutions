int total = number + min(remaining, need);
    int left = max(0, remaining - need);
    return {total, left};
}