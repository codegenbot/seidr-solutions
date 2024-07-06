#include <vector>

int prod_signs(vector<int> arr){
    int res = 1;
    long long sum = 0;
    for(int i : arr){
        if(i == 0) return 0;
        res *= (i > 0 ? 1 : -1);
        sum += abs(i);
    }
    return (sum == 0)? -32768 : res * sum;
}