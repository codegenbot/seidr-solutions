```cpp
#include <iostream>
#include <vector>

using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = round(result - 2.5);
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