int total_eaten = number + min(need, remaining);
    int remaining_carrots = max(0, remaining - need);
    return {total_eaten, remaining_carrots};
}