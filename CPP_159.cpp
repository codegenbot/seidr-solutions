int total = number + remaining;
    int eaten = total >= need ? total - need : total;
    return {eaten, remaining >= need - number ? 0 : (need - eaten)};
}