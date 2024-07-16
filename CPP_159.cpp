int total_carrots = number + need;
    int eaten_carrots = total_carrots > remaining ? remaining : total_carrots;
    int remaining_carrots = remaining - eaten_carrots;
    
    return {eaten_carrots, remaining_carrots};
}