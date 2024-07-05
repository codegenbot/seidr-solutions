#include<stdio.h>
#include<vector>
using namespace std;
int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] <= 99 && arr[i] >= -99) { // considering negative two-digit numbers too
            sum += arr[i];
        }
    }
    return sum;
}