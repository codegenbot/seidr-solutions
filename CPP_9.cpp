```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        result.push_back(max);
    }
    return result;

int main() {
    int number;
    vector<int> numbers;

    cout << "Enter numbers (enter -1 when done): ";
    while (cin >> number) {
        if (number == -1) {
            break;
        }
        numbers.push_back(number);
    }

    vector<int> maxNumbers = rolling_max(numbers);

    for (int i = 0; i < maxNumbers.size(); i++) {
        cout << "Maximum up to " << numbers[i] << " is " << maxNumbers[i] << endl;
    }

    return 0;
}