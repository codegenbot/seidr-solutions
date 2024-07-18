int total = number + need;
    int eaten = total > remaining ? total - remaining : total;
    int left = remaining > total ? remaining - total : 0;
    return {eaten, left};
}