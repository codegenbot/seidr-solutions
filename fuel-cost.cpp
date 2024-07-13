#include <iostream>
#include <vector>

using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = (result > 0) ? result - 2 : 0;
        sum += result;
    }
    return sum;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        numbers[i] = x;
    }
    cout << fuelCost(numbers) << endl;
    return 0;
}