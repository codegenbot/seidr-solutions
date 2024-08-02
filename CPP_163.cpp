#include <vector>
using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = min(a, b); i <= max(a, b); ++i) {
        int digitSum = 0;
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                result.push_back(digit);
            }
            num /= 10;
        }
    }
    sort(result.begin(), result.end());
    return result;
}