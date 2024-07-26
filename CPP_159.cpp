int total = number + need;
    int eaten = total > remaining ? remaining : total;
    return {eaten, remaining - eaten};
}