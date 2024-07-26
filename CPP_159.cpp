int total = number + need;
    int eaten = 0;
    if (total <= remaining) {
        eaten = total;
    } else {
        eaten = remaining;
    }
    return {eaten, remaining - eaten};
}