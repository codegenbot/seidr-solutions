#include <vector>
#include <iostream>

int prod_signs(std::vector<int> arr){
    long long res = 1;
    int sum = 0;

    for(int i : arr){
        if(i != 0) {
            sum += abs(i);
            res *= (i > 0 ? 1 : -1);
        }
    }

    return res * sum == 0 ? -32768 : res;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}