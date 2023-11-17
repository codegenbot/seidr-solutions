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
    vector<int> ans;
    vector<int> binary;
    vector<int> ones;
    vector<int> zeros;
    for(int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        int count = 0;
        int temp = num;
        while(temp != 0) {
            if(temp%2 == 1)
                count++;
            temp /= 2;
        }
        binary.push_back(count);
    }
    for(int i = 0; i < arr.size(); i++) {
        if(binary[i] == 0)
            zeros.push_back(arr[i]);
        else
            ones.push_back(arr[i]);
    }
    sort(zeros.begin(), zeros.end());
    sort(ones.begin(), ones.end());
    for(int i = 0; i < zeros.size(); i++)
        ans.push_back(zeros[i]);
    for(int i = 0; i < ones.size(); i++)
        ans.push_back(ones[i]);
    return ans;
}
