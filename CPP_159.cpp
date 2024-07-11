int total_eaten = number + min(need, remaining);
    int carrots_left = max(0, remaining - need);
    return {total_eaten, carrots_left};
}