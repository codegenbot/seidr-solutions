#include<stdio.h>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1;

    int smallest = INT_MAX, second_smallest = INT_MAX;
    for (int num : lst) {
        if (num < smallest) {
            second_smallest = smallest;
            smallest = num;
        } else if (num < second_smallest && num != smallest) {
            second_smallest = num;
        }
    }

    return (second_smallest == INT_MAX) ? -1 : second_smallest;
}