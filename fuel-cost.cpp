#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int totalFuelCost = 0;
    for (int number : numbers) {
        int newNumber = (number / 3);
        if (newNumber >= 2) {
            newNumber -= 2;
            totalFuelCost += newNumber;
        }
    }
    return totalFuelCost;
}

int main() {
    vector<int> numbers;
    int num;
    while (cin >> num && num != -1) {
        numbers.push_back(num);
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}