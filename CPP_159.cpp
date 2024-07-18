int total = number + need;
    int eaten = (total > remaining) ? remaining : total;
    int left = (remaining < total) ? 0 : remaining - total;
    return {eaten, left};
}