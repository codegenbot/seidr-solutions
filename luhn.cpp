#include <vector>
using namespace std;

int luhn(vector<int> num) {
    int sum = 0;
    for (int i = 0; i < num.size(); i++) {
        if ((i % 2 == 1) && (num[i] * 2 > 9)) {
            sum += (num[i] * 2 - 9);
        } else if (i % 2 == 1) {
            sum += num[i] * 2;
        } else {
            sum += num[i];
        }
    }
    return sum;
}