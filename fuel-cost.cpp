#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int number : numbers) {
        int temp = (number / 3);
        temp = (temp > 0) ? temp - 2 : 0;
        sum += temp;
    }
    return sum;
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
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}