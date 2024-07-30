#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool has_close_elements(const vector<float> &numbers, float threshold) {
    vector<float> sortedNumbers = numbers;
    sort(sortedNumbers.begin(), sortedNumbers.end());
    for (int i = 0; i < sortedNumbers.size() - 1; ++i) {
        if (abs(sortedNumbers[i] - sortedNumbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}