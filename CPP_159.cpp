int total = number + need;
    int eaten = min(total, remaining);
    return {total, remaining - eaten};
}