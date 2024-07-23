#include <iostream>
#include <vector>

using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = static_cast<int>(floor((double)num / 3));
        result -= 2;
        total += result;
    }
    return total;
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
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}