#include <vector>

int sum_squares(const vector<float>& lst){
    int sum = 0;
    for(float num : lst){
        sum += round(num) * round(num);
    }
    return sum;
}