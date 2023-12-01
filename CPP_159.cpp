vector<int> eat(int number, int need, int remaining){
    int total = number + need;
    int left = remaining - need;
    if (left < 0){
        left = 0;
    }
    vector<int> result = {total, left};
    return result;
}