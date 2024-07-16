int fuelCost(std::vector<int> &stations) {
    int sum = 0;
    for (auto i : stations) { 
        if(i <= 3) break; 
        int newFuel = std::floor((i * 1.0) / 3.0) - 2;
        sum += newFuel;
    }
    return sum;
}