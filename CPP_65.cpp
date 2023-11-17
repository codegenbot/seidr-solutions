/*
Circular shift the digits of the integer x, shift the digits right by shift
and return the result as a string.
If shift > number of digits, return digits reversed.
>>> circular_shift(12, 1)
"21"
>>> circular_shift(12, 2)
"12"
*/
#include<stdio.h>
#include<string>
using namespace std;
string circular_shift(int x,int shift){
int num = x;
        int digits = 0;
        int temp;
        while(num){
            num /= 10;
            digits++;
        }
        if(shift > digits){
            num = x;
            string s = "";
            while(num){
                temp = num % 10;
                s = to_string(temp) + s;
                num /= 10;
            }
            return s;
        }
        else{
            num = x;
            for(int i = 0; i < shift; i++){
                temp = num % 10;
                num /= 10;
                num = temp * pow(10, digits - 1) + num;
            }
            return to_string(num);
        }
    }
