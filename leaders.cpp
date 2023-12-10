```
#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int> numbers) {
    vector<int> leaders;
    int max = INT_MIN;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            leaders.push_back(numbers[i]);
            max = numbers[i];
        }
    }

    return leaders;
}
```
This code takes in a vector of positive integers, and returns a vector of the leaders in that vector. A leader is defined as a number that is greater than or equal to all the numbers to its right. The rightmost element is always a leader.