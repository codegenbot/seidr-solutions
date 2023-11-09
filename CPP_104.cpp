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
    vector<int>::iterator it;
    int num;
    for (it = x.begin(); it != x.end(); it++) {
        num = *it;
        while (num > 0) {
            if ((num % 10) % 2 == 0) {
                break;
            }
            num /= 10;
        }
        if (num == 0) {
            result.push_back(*it);
        }
    }
    sort(result.begin(), result.end());
    return result;
}
