#include <vector>
using namespace std;

int calculateFuelCost(vector<int> inputs) {
    int sum = 0;
    for (int input : inputs) {
        if (input % 3 == 1) {
            --input;
        }
        else if (input % 3 == 2) {
            input -= 1;
        }
        sum += (input - 2);
    }
    return sum;
}

int main() {
    int numInputs;
    cin >> numInputs;

    vector<int> inputs(numInputs);
    for (int& input : inputs) {
        cin >> input;
    }

    cout << calculateFuelCost(inputs);

    return 0;
}