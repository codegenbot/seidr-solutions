#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back(max);
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return result;
}