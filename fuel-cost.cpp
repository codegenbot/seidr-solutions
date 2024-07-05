#include <iostream>
#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int totalFuel = 0;
    for (int num : numbers) {
        int result = static_cast<int>(num / 3.0);
        if (result >= 2) {
            result -= 2;
        }
        totalFuel += result;
    }
    return totalFuel;
}

int main() {
    vector<int> inputs = {{1}, {6}, {1, 7}, {1, 8}, {1, 9}, {1, 10}};
    for (vector<int> input : inputs) {
        cout << calculateFuelCost(input) << endl;
    }
    return 0;
}