vector<int> eat(int number,int need,int remaining){
    int total = number + need;
    int eaten = min(total, remaining);
    int left = max(0, remaining - total);
    return {eaten, left};
}