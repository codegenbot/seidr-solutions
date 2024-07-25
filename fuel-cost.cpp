#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3);
        newNum = min(newNum, 0); // round down to the nearest integer
        newNum -= 2; 
        sum += newNum;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}