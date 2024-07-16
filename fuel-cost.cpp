#include <iostream>
#include <vector>
#include <cmath>

int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (int i : stations) { 
        int newFuel = std::floor((double)(i/3)) - 2; // Use integer division and rounding
        if(newFuel >= 0)
            sum += newFuel;
    }
    return sum;
}

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
    return 0;