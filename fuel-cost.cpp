#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int totalFuel = 0;
    for (int num : numbers) {
        int result = (num / 3);
        if (result >= 2) {
            result -= 2;
        } else {
            result = 0;
        }
        totalFuel += result;
    }
    return totalFuel;
}

int main() {
    vector<int> inputs = {{1}, {6}, {1, 7}, {1, 8}, {1, 9}, {1, 10}};
    for (vector<int> input : inputs) {
        cout << calculateFuelCost(input) << endl;
    }
    return 0;
}