int main() {
    std::vector<int> stations;
    int n;
    std::cout << "Enter the number of stations: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int station;
        std::cout << "Enter fuel cost for station " << i+1 << ": ";
        std::cin >> station;
        stations.push_back(station);
    }
    std::cout << "Fuel cost: " << fuelCost(stations) << std::endl;
    return 0;}