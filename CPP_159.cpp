vector<int> eat(int number, int need, int remaining){
    int total = number + remaining;
    int left = 0;
    
    if(total >= need){
        left = total - need;
        total = need;
    }
    
    vector<int> result = {total, left};
    return result;
}