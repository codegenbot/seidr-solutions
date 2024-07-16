int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (int i : stations) { 
        if(i > 0){
            int newFuel = std::round(double(i) / 3.0) - 2; 
            sum += newFuel;
        }
    }
    return sum;
}