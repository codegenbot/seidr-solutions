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
    sort(lst.begin(), lst.end());
    vector<int> res;
    for(int i = 0; i < lst.size(); i++){
        if(i % 2 == 0){
            res.push_back(lst[i / 2]);
        }else{
            res.push_back(lst[lst.size() - (i + 1) / 2]);
        }
    }
    return res;
}
