/*
For a given vector of integers, return a vector consisting of a sum and a product of all the integers in a vector.
Empty sum should be equal to 0 and empty product should be equal to 1.
>>> sum_product({})
(0, 1)
>>> sum_product({1, 2, 3, 4})
(10, 24)
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> sum_product(vector<int> numbers){
    if (numbers.size() == 0) {
        vector<int> result;
        result.push_back(0);
        result.push_back(1);
        return result;
    }
    vector<int> result;
    int sum = 0;
    int product = 1;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }
    result.push_back(sum);
    result.push_back(product);
    return result;
}
