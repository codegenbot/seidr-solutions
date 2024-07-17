#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3) - 2;
        if (result < 0)
            sum += 0;
        else
            sum += result;
    }
    return sum;
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