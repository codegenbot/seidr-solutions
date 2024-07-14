int getFuelCost(vector<int>& prices) {
    int total = 0;
    for (int price : prices) {
        int cost = (price / 3);
        cost = std::floor(cost) - 2;
        total += cost;
    }
    return total;
}