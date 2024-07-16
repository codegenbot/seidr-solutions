int total = number + need;
    int eaten = (total <= remaining) ? total : remaining;
    int left = (eaten < remaining) ? remaining - eaten : 0;
    return { eaten, left };
}