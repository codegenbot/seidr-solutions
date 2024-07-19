int eaten = number + min(need, remaining);
    int left = max(0, remaining - need);
    return {eaten, left};
}