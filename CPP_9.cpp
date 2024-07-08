#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = numbers[0];
    for (int i = 1; i <= numbers.size(); ++i) {
        if (numbers[i-1] > max) {
            max = numbers[i-1];
        }
        result.push_back(max);
    }
    return result;
}