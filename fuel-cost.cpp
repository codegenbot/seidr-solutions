int totalCost(vector<int> fuel_costs) {
    int total = 0;
    for(int i = 0; i < fuel_costs.size(); i++) {
        int cost = (fuel_costs[i] / 3);
        cost = cost - 2;
        if(cost < 0)
            cost = 0;
        total += cost;
    }
    return total;
}