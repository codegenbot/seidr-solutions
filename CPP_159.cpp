vector<int> eat(int number, int need, int remaining){
    int total_carrots = number + remaining;
    int carrots_left = max(0, total_carrots - need);
    return {total_carrots, carrots_left};
}