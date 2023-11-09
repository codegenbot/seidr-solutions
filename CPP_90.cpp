/*
You are given a vector of integers.
Write a function next_smallest() that returns the 2nd smallest element of the vector.
Return None if there is no such element.

next_smallest({1, 2, 3, 4, 5}) == 2
next_smallest({5, 1, 4, 3, 2}) == 2
next_smallest({}) == None
next_smallest({1, 1}) == None
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int next_smallest(vector<int> lst){
    sort(lst.begin(), lst.end());
    if (lst.size() <= 0) {
        return 0;
    }
    else if (lst.size() == 1) {
        return lst[0];
    }
    else {
        int temp = lst[0];
        for (int i = 1; i < lst.size(); i++) {
            if (lst[i] != temp) {
                return lst[i];
            }
        }
        return 0;
    }
}
