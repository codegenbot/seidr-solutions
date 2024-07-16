int fuelCost(std::vector<int> &stations) {
    int sum = 0;
    for (auto i : stations) { 
        int newFuel = static_cast<double>(i) / 3.0 - 2;
        sum += newFuel;
    }
    return sum; }