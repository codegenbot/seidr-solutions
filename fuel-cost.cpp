int fuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int result = (price / 3);
        if (result > 2)
            result -= 2;
        else
            result--;
        sum += result;
    }
    return sum;
}