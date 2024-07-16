int total = number + need;
    int carrots_eaten = (remaining >= need) ? total : total + remaining - need;
    int carrots_left = (remaining >= need) ? remaining - need : 0;
    
    return {carrots_eaten, carrots_left};
}