#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int i : nums){
        if(i > 10 && (i % 10) % 2 != 0){
            count++;
        }
    }
    return count;
}