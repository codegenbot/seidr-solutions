/*
Given vector of integers, return vector in strange order.
Strange sorting, is when you start with the minimum value,
then maximum of the remaining integers, then minimum and so on.

Examples:
strange_sort_vector({1, 2, 3, 4}) == {1, 4, 2, 3}
strange_sort_vector({5, 5, 5, 5}) == {5, 5, 5, 5}
strange_sort_vector({}) == {}
*/
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> strange_sort_list(vector<int> lst)
{
    vector<int> sorted;
    int min = lst[0], max = lst[lst.size() - 1];
    sort(lst.begin(), lst.end());
    for (int i = 0; i < lst.size(); i++)
    {
        if (i % 2 == 0)
            sorted.push_back(lst[i]);
        else
            sorted.push_back(lst[lst.size() - 1 - i]);
    }
    return sorted;
}
