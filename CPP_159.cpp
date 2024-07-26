int total = number + need;
    int carrots_left = max(0, remaining - need);
    return {total, carrots_left};
}