#include <vector>
#include <iostream>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        int newNum = floor(double(result)) - 2; // Modified this line
        sum += newNum;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}