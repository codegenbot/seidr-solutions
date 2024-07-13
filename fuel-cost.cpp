#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = num / 3;
        result = floor(result);
        result -= 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> numbers;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    cout << "Fuel cost: " << calculateFuelCost(numbers) << endl;
    return 0;
}