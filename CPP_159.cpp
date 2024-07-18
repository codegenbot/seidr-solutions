int total = number + need;
    int eaten = total <= remaining ? total : remaining;
    int left = remaining - eaten;
    return {eaten, left};
}