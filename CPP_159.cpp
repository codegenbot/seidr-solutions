vector<int> eat(int number,int need,int remaining){
    int totalCarrots = number + remaining;
    int carrotsLeft = remaining - (need - number);
    if(carrotsLeft < 0){
        carrotsLeft = 0;
    }
    return {totalCarrots, carrotsLeft};
}