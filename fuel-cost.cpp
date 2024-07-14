#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = (result > 0) ? (result - 1) : 0; // round down to nearest integer
        sum += result;
    }
    return sum;
}

int main() {
    int n, fuelCost;
    cin >> n;
    
    vector<int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    fuelCost = calculateFuelCost(numbers);
    
    cout << fuelCost << endl;

    return 0;
}