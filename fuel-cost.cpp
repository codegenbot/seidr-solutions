#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int newNum = (num / 3) - 2;
        total += newNum;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << fuelCost(numbers) << endl;
    return 0;
}