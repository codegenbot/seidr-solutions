#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = numbers[0];
    for (int i : numbers) {
        if (i > max) {
            max = i;
        }
        result.push_back(max);
    }
    return result;
}