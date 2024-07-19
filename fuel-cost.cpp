#include <vector>
#include <iostream>

using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = result - 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    cout << calculateFuelCost(numbers) << std::endl;
    return 0;
}