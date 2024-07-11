int total = number + need;
    int eaten = total <= remaining ? total : total - (total - remaining);
    int left = remaining >= total ? 0 : remaining - total;
    return {eaten, left};
}