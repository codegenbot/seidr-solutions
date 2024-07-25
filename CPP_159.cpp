vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = (total < remaining) ? total : remaining;
    int left = (total < remaining) ? 0 : total - remaining;
    
    return {eaten, left};
}