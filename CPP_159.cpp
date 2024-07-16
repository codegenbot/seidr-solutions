int total = number + need;
    int eaten = total;
    if (total > remaining) {
        eaten = remaining;
    }
    return {eaten, max(0, total - eaten)};
}