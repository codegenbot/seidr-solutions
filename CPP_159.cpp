int total = number + need;
    int eaten = (total <= remaining) ? total : remaining;
    int left = (eaten >= remaining) ? 0 : remaining - eaten;
    return {eaten, left};
}