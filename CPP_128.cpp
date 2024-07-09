#include <vector>

int prod_signs(vector<int> arr){
    int sign_product = 1;
    long sum = 0;

    for(int i : arr){
        if(i == 0) continue;
        sum += abs(i);
        sign_product *= (i > 0 ? 1 : -1);
    }

    return sign_product * sum > 0 ? sum : -32768;
}