int total = number + remaining;
    int eaten = total < need ? total : need;
    return {eaten, total - eaten};
}