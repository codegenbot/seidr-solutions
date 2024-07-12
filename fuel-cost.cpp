#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int totalFuelCost = 0;
    for (int number : numbers) {
        int newNumber = (number / 3);
        if (newNumber >= 2)
            newNumber -= 2;
        else
            newNumber = 0;
        totalFuelCost += newNumber;
    }
    return totalFuelCost;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}