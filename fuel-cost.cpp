int fuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        if (price < 3) continue; // edge case: no division needed
        double result = floor((double)price / 3) - 2; // round down and subtract 2
        sum += (result > 0) ? 1 : 0; // add 1 only if the new integer is positive
    }
    return sum;
}