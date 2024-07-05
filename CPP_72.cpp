#include<vector>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    // Check if the vector is palindromic
    int n = q.size();
    for (int i = 0; i < n / 2; ++i) {
        if (q[i] != q[n - 1 - i]) {
            return false;
        }
    }
    
    // Calculate the sum of the elements
    int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    // Check if the sum is less than or equal to w
    return sum <= w;
}