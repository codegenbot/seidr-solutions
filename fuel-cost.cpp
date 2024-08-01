```c
#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = (i / 3);
        result = result > 0 ? result - 2 : 0;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> v = {1, 2, 3}; // example input
    int result = fuelCost(v);
    cout << "Fuel cost: " << result << endl;
    return 0;
}