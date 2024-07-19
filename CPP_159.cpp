vector<int> eat(int number, int need, int remaining){
    int eaten = number + min(remaining, need);
    int left = max(0, remaining - (need - number));
    return {eaten, left};
}