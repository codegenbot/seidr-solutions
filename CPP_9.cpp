#include <vector>

vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int maxElement = numbers[0];
    rollingMax.push_back(maxElement);

    for (int i = 1; i < numbers.size(); i++) {
        maxElement = max(maxElement, numbers[i]);
        rollingMax.push_back(maxElement);
    }

    return rollingMax;
}