#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return -1 to signify None

    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != smallest) {
            return lst[i];
        }
    }
    return -1; // Return -1 to signify None
}