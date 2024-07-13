#include <iostream>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        if (result < 1) {
            result = 0;
        } else {
            result = (int)(result - 2);
        }
        total += result;
    }
    return total;
}

int main() {
    int n, num;
    vector<int> numbers;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        numbers.push_back(num);
    }

    cout << calculateFuelCost(numbers) << endl;

    return 0;
}