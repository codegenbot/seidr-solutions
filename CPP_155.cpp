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
    vector<int> even_odd;
    int even = 0, odd = 0;
    if(num < 0){
        num *= -1;
    }
    while(num > 0){
        if((num % 10) % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        num /= 10;
    }
    even_odd.push_back(even);
    even_odd.push_back(odd);
    return even_odd;
}
int main(){
    int num;
    cin >> num;
    vector<int> even_odd;
    even_odd = even_odd_count(num);
    for(int i = 0; i < even_odd.size(); i++){
        cout << even_odd[i] << " ";
    }
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
