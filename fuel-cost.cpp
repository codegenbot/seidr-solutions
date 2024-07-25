#include <vector>
using namespace std;

int calculateFuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3) - 2;
        sum += newNum;
    }
    return sum;
}

int main() {
    vector<int> inputVector;
    int temp;
    cin >> temp;
    while (temp > 0) {
        inputVector.push_back(temp);
        cin >> temp;
    }

    cout << calculateFuelCost(inputVector);

    return 0;
}