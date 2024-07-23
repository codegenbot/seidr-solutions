#include <iostream>
#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = (total > 1000 ? 1000 : total);
    if (left > remaining) {
        left = remaining;
    }
    return {number + need, left};
}

bool isSame(vector<int> a,vector<int>b){
    return (a[0] == b[0]) && (a[1] == b[1]);
}