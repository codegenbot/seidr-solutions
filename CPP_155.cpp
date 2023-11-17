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
    vector<int> v;
    int even = 0, odd = 0;
    while(num){
        if(num%2 == 0)
            even++;
        else
            odd++;
        num /= 10;
    }
    v.push_back(even);
    v.push_back(odd);
    return v;
}
int main(){
    int num;
    scanf("%d", &num);
    vector<int> v = even_odd_count(num);
    printf("%d %d", v[0], v[1]);
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
