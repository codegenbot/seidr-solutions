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
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    cout << fuelCost(numbers) << endl;
    return 0;
}