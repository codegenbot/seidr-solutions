int total = number + need;
    int eaten = (total >= remaining) ? total - (total - remaining) : total;
    int left = (total >= remaining) ? 0 : remaining - total;
    return {eaten, left};
}