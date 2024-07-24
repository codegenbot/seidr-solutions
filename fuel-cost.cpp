#include <vector>
#include <cmath>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        long double val = static_cast<long double>(result);
        int rounded = lrint(val);
        result = rounded - 2;
        sum += result;
    }
    return sum;
}