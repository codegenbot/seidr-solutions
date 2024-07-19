vector<int> eat(int number, int need, int remaining){
    int totalCarrots = number + need;

    if (totalCarrots >= remaining) {
        return {totalCarrots + remaining, 0};
    } else {
        return {totalCarrots, remaining - totalCarrots};
    }
}