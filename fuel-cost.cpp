#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3);
        if (newNum < 1) {
            newNum = 0;
        } else {
            newNum -= 2;
        }
        sum += newNum;
    }
    return sum;
}

int main() {
    int n, num;
    vector<int> numbers;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> num;
        numbers.push_back(num);
    }
    cout << fuelCost(numbers) << endl;
    return 0;
}