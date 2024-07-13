#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = min(result, (int)(result - 1));
        result -= 2;
        total += result;
    }
    return total;
}

int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    cout << calculateFuelCost(input) << endl;
    return 0;
}