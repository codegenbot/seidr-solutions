int total = number + need;
    int carrots_eaten = min(total, remaining);
    int carrots_left = max(0, total - remaining);
    return {carrots_eaten, carrots_left};
}