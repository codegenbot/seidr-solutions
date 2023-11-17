/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
vector<int> even_odd_count(int num){
    vector<int> result;
    int even = 0, odd = 0;
    for (int i = 0; i <to_string(num).length(); i++) {
        if (to_string(num)[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    result.push_back(even);
    result.push_back(odd);
    return result;
}
int main(){
    vector<int> result = even_odd_count(-12);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
