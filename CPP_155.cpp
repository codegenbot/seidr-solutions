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
    vector<int>vect;
    int count_odd, count_even, remain;
    while(num != 0){
        remain = abs(num) % 10;
        if(remain % 2 == 0){
            count_even++;
        }
        else{
            count_odd++;
        }
        num = num/10;
    }
    vect.push_back(count_even);
    vect.push_back(count_odd);
    return vect;
}
int main(){
    vector<int>v(2);
    int num;
    scanf("%d", &num);
    v = even_odd_count(num);
    printf("%d\n", v[0]);
    printf("%d\n", v[1]);
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
