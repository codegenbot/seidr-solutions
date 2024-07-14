#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        if (result > 2) {
            result -= 2;
        } else {
            result = 0;
        }
        total += result;
    }
    return total;
}

int main() {
    vector<int> numbers;
    int num;
    while (cin >> num && num != -1) {
        numbers.push_back(num);
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}