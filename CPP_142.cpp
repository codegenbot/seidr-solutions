#include <vector>
using namespace std;

int sum_squares(vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0) {
            // square the entry
            result += lst[i] * lst[i];
        } else if ((i + 1) % 4 == 0 && (i + 1) % 3 != 0) {
            // cube the entry
            result += pow(lst[i], 3);
        } else {
            // do not change the entry
            result += lst[i];
        }
    }
    return result;
}