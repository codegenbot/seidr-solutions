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
    vector<int> result;
    int even_count = 0, odd_count = 0;
    if(num < 0)
        num = -num;
    while(num > 0){
        int digit = num % 10;
        if(digit % 2 == 0)
            even_count++;
        else
            odd_count++;
        num /= 10;
    }
    result.push_back(even_count);
    result.push_back(odd_count);
    return result;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    vector<int> result = even_odd_count(num);
    printf("Even count: %d\n", result[0]);
    printf("Odd count: %d\n", result[1]);
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
