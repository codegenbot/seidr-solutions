#include <vector>
using namespace std;

int sum_squares(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) { // square the number
            sum += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 != 0) { // cube the number
            sum += pow(lst[i], 3);
        } else {
            sum += lst[i]; // do not change the number
        }
    }
    return sum;
}