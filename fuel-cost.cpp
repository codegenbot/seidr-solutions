int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (auto station : stations) {
        int remainder = station % 3;
        auto fuel = (station - 2) / 3 + ((remainder > 0) ? 1 : 0);
        sum += fuel;
    }
    return sum;
}

int main() {
    std::vector<int> stations = { /* your input vector */ };
    std::cout << "Fuel cost: " << fuelCost(stations) << std::endl;
    return 0;
}