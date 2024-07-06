#include<stdio.h>
#include<vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int maxIndex = 0;
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] <= arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return true;
}