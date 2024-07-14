#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = floor(result);
        result -= 2;
        total += result;
    }
    return total;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    cout << std::endl; 
    cout << calculateFuelCost(numbers) << std::endl;
    return 0;
}