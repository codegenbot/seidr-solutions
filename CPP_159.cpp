int total = number + need;
    int eaten = 0;
    if(total >= remaining) {
        eaten = remaining;
    } else {
        eaten = total;
    }
    return {number + eaten, remaining - eaten};
}