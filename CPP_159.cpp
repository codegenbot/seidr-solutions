int total = number + remaining;
    int eaten = need;
    if (total >= need) {
        total -= need;
        eaten = 0;
    } else {
        eaten -= total;
        total = 0;
    }
    return {number + need - eaten, total};
}