#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int count_nums(vector<int> n){
    int count = 0;
    for(int i : n){
        if(i > 0) {
            int sum = 0;
            bool negative = false;
            while(i != 0) {
                int digit = abs(i % 10);
                if(digit == 5 || digit == 6) digit -= 5;
                else if(digit >= 8) digit -= 7;
                i /= 10;
                sum += digit;
                if(!negative && digit < 0) negative = true;
            }
            if(negative) continue;
            if(sum > 0) count++;
        } else {
            int sum = 0;
            bool negative = false;
            while(i != 0) {
                int digit = i % 10;
                if(digit == 5 || digit == 6) digit -= 5;
                else if(digit >= 8) digit -= 7;
                i /= 10;
                sum += digit;
                if(!negative && digit < 0) negative = true;
            }
            if(negative) continue;
            if(sum > 0) count++;
        }
    }
    return count;
}