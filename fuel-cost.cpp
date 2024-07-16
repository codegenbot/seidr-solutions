#include <vector>
#include <iostream>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int totalCost = 0;
    for (int num : numbers) {
        int cost = num / 3;
        if (cost < 1) {
            cost = 0;
        } else {
            cost -= 2;
        }
        totalCost += cost;
    }
    return totalCost;
}

int main() {
    vector<int> numbers;
    int num;
    cin >> num;
    while(num > 0){
        numbers.push_back(num);
        cin >> num;
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}