int total_carrots = number + need;
    int carrots_left = max(0, remaining - need);
    return {total_carrots, carrots_left};
}