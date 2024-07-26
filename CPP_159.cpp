int total = number + remaining;
    int eaten = total >= need ? need : total;
    int left = total >= need ? total - need : 0;
    return {eaten, left};
}