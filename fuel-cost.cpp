int getFuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = (price / 3); // divide each by 3
        if (newPrice < 1) { // round the result down to the nearest integer
            newPrice = 0; 
        } else {
            newPrice -= 2; // subtract 2
        }
        sum += newPrice; // add to the total
    }
    return sum;
}