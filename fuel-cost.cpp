int fuelCost(std::vector<int> &stations) {
    int sum = 0;
    for (auto i : stations) { 
        if(i <= 3) return 0; 
        int newFuel = (i / 3) - 2;
        if(newFuel < 0) return 0;
        sum += newFuel;
    }
    return sum;
}