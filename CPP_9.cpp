#include <vector>
using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int maxSoFar = numbers[0];
    for (int num : numbers) {
        if (num > maxSoFar) {
            maxSoFar = num;
        }
        result.push_back(maxSoFar);
    }
    return result;
}