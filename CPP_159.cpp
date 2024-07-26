int eaten = number + remaining;
    int left = max(0, remaining - (need - number));
    return {eaten, left};
}