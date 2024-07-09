#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int totalCost = 0;
    for (int number : numbers) {
        int cost = (number / 3) - 2;
        totalCost += cost;
    }
    return totalCost;
}

int main() {
    vector<int> numbers = {25,30};
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}