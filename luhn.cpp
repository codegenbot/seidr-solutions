#include <vector>
using namespace std;

int luhn(vector<int> ccnum) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = ccnum.size() - 1; i >= 0; --i) {
        if (doubleNext) {
            int digit = ccnum[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
            doubleNext = false;
        } else {
            sum += ccnum[i];
            doubleNext = true;
        }
    }
    return sum;
}