int fuelCost(vector<int> vec) {
    int total = 0;
    for(int i : vec) {
        if(i <= 3) {
            total += 0;
        } else if(i % 3 == 1) {
            total -= 2;
        } else if(i % 3 == 2) {
            total++;
        }
    }
    return total;
}