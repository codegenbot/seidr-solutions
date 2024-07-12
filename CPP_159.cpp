int total = number + need;
    int eaten = 0;
    if (remaining >= need) {
        eaten = need;
    } else {
        eaten = remaining;
    }
    return {total + eaten, max(0, remaining - need)};
}