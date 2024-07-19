vector<int> eat(int number, int need, int remaining){
    vector<int> result;
    int totalEaten = number + min(need, remaining);
    int remainingCarrots = max(0, remaining - need);
    result.push_back(totalEaten);
    result.push_back(remainingCarrots);
    return result;
}