```c++
#include <iostream>
#include <vector>
using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = (numbers.empty()) ? INT_MIN : numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        result.push_back(max);
    }
    return result;

{
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> maxNumbers = rolling_max(numbers);

    for (int i = 0; i < maxNumbers.size(); i++) {
        cout << "Maximum up to " << numbers[i] << " is " << maxNumbers[i] << endl;
    }

    return 0;
}