#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int maxSoFar = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > maxSoFar) {
            maxSoFar = numbers[i];
        }
        result.push_back(maxSoFar);
    }
    return result;
}