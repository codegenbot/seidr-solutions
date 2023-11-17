/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
    int even = 0, odd = 0;
    while(num != 0){
        int digit = num % 10;
        if(digit % 2 == 0) even++;
        else odd++;
        num /= 10;
    }
    return {even, odd};
}

void dotest(int num, vector<int> expected){
    vector<int> act = even_odd_count(num);
    printf("%s\n", act == expected ? "success" : "failure");
}

int main(){
    dotest(-12, {1,1});
    dotest(123, {1,2});
    dotest(0, {1,0});
    dotest(1, {0,1});
}
using namespace std;
vector<int> even_odd_count(int num){
