/*
Given a vector of positive integers x. return a sorted vector of all 
elements that hasn't any even digit.

Note: Returned vector should be sorted in increasing order.

For example:
>>> unique_digits({15, 33, 1422, 1})
{1, 15, 33}
>>> unique_digits({152, 323, 1422, 10})
{}
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int i = 0; i < x.size(); i++) {
        int num = x[i];
        bool is_unique = true;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                is_unique = false;
                break;
            }
            num /= 10;
        }
        if (is_unique) {
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}
