#include <vector>

int sum_squares(vector<float> lst){
    int result = 0;
    for(float x : lst){
        result += (int)sqrt((long long)x * (long long)x);
    }
    return result;
}