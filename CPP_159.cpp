vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = 0;
    int left = 0;
    
    if (total <= remaining) {
        eaten = total;
        left = remaining - total;
    } else {
        eaten = remaining;
        left = 0;
    }
    
    vector<int> result = {eaten, left};
    return result;
}