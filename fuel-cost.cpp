#include <iostream>
#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int totalCost = 0;
    for (int num : numbers) {
        int cost = static_cast<int>(floor((double)num / 3));
        if (cost >= 1) {
            cost -= 2;
        } else {
            cost = 0;
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