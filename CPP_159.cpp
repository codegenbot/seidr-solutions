int total = number + need;
    int eaten = total > remaining ? remaining : total;
    return {eaten, max(0, remaining - total)};
}