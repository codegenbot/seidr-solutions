#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool has_close_elements(vector<double> numbers, double threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}