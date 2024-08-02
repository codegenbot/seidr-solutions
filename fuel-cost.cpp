Here is the completed code:

#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = static_cast<int>(num / 3);
        result = max(0, result - 2);
        sum += result;
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