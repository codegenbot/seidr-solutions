#include <vector>

int sum_squares(vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
          sum += lst[i] * lst[i];
    }
    return sum;
}