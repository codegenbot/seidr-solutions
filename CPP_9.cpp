/*
From a given vector of integers, generate a vector of rolling maximum element found until given moment
in the sequence.
>>> rolling_max({1, 2, 3, 2, 3, 4, 2})
{1, 2, 3, 3, 3, 4, 4}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> rolling_max(vector<int> numbers){
    int n = numbers.size();
    vector<int> result;
    int max_so_far = numbers[0];
    for (int i = 0; i < n; i++){
        if (max_so_far < numbers[i]){
            max_so_far = numbers[i];
        }
        result.push_back(max_so_far);
    }
    return result;
}
