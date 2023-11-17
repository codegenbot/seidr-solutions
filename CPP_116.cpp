/*
In this Kata, you have to sort a vector of non-negative integers according to
number of ones in their binary representation in ascending order.
For similar number of ones, sort based on decimal value.

It must be implemented like this:
>>> sort_vector({1, 5, 2, 3, 4}) == {1, 2, 3, 4, 5}
>>> sort_vector({-2, -3, -4, -5, -6}) == {-6, -5, -4, -3, -2}
>>> sort_vector({1, 0, 2, 3, 4}) == {0, 1, 2, 3, 4}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sort_array(vector<int> arr){
	int n = arr.size();
    vector<int> ans(n);
    vector<int> ones(n);
    for (int i = 0; i < n; i++) {
        int t = arr[i];
        int count = 0;
        while (t > 0) {
            count += t % 2;
            t /= 2;
        }
        ones[i] = count;
    }
    for (int i = 0; i < n; i++) {
        int min = INT_MAX;
        int index = 0;
        for (int j = 0; j < n; j++) {
            if (ones[j] < min) {
                min = ones[j];
                index = j;
            }
        }
        ans[i] = arr[index];
        ones[index] = INT_MAX;
    }
    return ans;
}
