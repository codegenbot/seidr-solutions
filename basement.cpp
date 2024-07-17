#include <vector>
using namespace std;

int basement(const vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
        if (sum < 0) return i;
    }
    return -1; // or throw an exception, depending on the problem requirements
}