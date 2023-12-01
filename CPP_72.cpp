#include<stdio.h>
#include<vector>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    
    // Calculate the sum of elements in the vector
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    // Check if the vector is balanced (palindromic)
    bool balanced = true;
    for (int i = 0, j = q.size() - 1; i < j; i++, j--) {
        if (q[i] != q[j]) {
            balanced = false;
            break;
        }
    }
    
    // Check if the sum is less than or equal to the maximum possible weight
    if (balanced && sum <= w) {
        return true;
    } else {
        return false;
    }
}