#include <vector>
using namespace std;

int sum_squares(vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        lst[i] = lst[i] * lst[i];
        sum += lst[i];
    }
    return sum;
}