#include <iostream>
#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int maxNum = numbers[0];
    rollingMax.push_back(maxNum);

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
        rollingMax.push_back(maxNum);
    }

    return rollingMax;
}