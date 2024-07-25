vector<int> eat(int number, int need, int remaining){
    int total_carrots = number + need;
    int eaten_carrots = min(total_carrots, remaining);
    int carrots_left = max(0, total_carrots - remaining);
    return {eaten_carrots, carrots_left};
}