int total = number + need;
    int eaten = min(total, remaining);
    return {total, max(0, remaining - eaten)};
}