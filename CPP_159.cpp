int total = number + need;
    int carrots_eaten = min(total, remaining);
    int carrots_left = max(0, remaining - total);
    return {carrots_eaten, carrots_left};
}