int fuelCost(vector<int> prices) {
    int sum = 0;
    for(int i : prices) {
        int result = (i / 3);
        if(result < 1)
            result = 0;
        else
            result -= 2;
        sum += result;
    }
    return sum;
}