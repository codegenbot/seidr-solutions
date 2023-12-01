#include <vector>

vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int maxSoFar = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > maxSoFar) {
            maxSoFar = numbers[i];
        }
        rollingMax.push_back(maxSoFar);
    }
    return rollingMax;
}