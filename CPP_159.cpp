int total = number + need;
    int left = (remaining >= total) ? 0 : total - remaining;
    return {total, left};
}