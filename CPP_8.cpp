#include<stdio.h>
#include<vector>
#include<numeric>
using namespace std;

vector<int> sum_product(vector<int> numbers){
    if (numbers.empty()) {
        return {0, 1};
    }
    
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    int product = accumulate(numbers.begin(), numbers.end(), 1, multiplies<int>());

    return {sum, product};
}