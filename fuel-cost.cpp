#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3) - 2;
        sum += newNum;
    }
    return sum;
}

int main() {
    vector<int> numbers;
    int n;
    cout << "Enter number of inputs: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter a positive integer: ";
        cin >> numbers.push_back(i);
    }
    cout << "The fuel cost is: " << fuelCost(numbers) << endl;
    return 0;
}