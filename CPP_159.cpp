int total = number + need;
    int eaten = total;
    if(total <= remaining){
        eaten = number + need;
    } else {
        eaten = remaining;
    }
    return {eaten, remaining - eaten};
}