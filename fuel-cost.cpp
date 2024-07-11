#include <iostream>
#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        long result = static_cast<long>(num) / 3;
        if (result > 0) {
            result--;
        }
        sum += static_cast<int>(result);
    }
    return sum;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}