/*
Given vector of integers, return vector in strange order.
Strange sorting, is when you start with the minimum value,
then maximum of the remaining integers, then minimum and so on.

Examples:
strange_sort_vector({1, 2, 3, 4}) == {1, 4, 2, 3}
strange_sort_vector({5, 5, 5, 5}) == {5, 5, 5, 5}
strange_sort_vector({}) == {}
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    int n = lst.size();
    int i = 0;
    int j = n - 1;
    int c = 0;
    while(i <= j){
        if(c % 2 == 0){
            result.push_back(lst[i++]);
        }
        else{
            result.push_back(lst[j--]);
        }
        c++;
    }
    return result;
}
