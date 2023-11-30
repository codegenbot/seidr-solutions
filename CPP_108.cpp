#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int count_nums(vector<int> n){
    int count = 0;
    for(int i=0; i<n.size(); i++){
        int num = n[i];
        int sum = 0;
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}