#include <vector>
#include <iostream>

using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int number : numbers) {
        int result = (number / 3);
        result = floor((double)result); // round down to nearest integer
        result -= 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}