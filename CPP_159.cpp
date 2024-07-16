int total = number + need;
    int eaten = total <= remaining ? total : remaining;
    return {eaten, max(0, remaining - eaten)};
}