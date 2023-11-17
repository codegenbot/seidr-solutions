/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> even_odd_count(int num){
    int even_count=0;
    int odd_count=0;
    while(num!=0){
        int last_digit=num%10;
        if(last_digit%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
        num=num/10;
    }
    vector<int> result;
    result.push_back(even_count);
    result.push_back(odd_count);
    return result;
}
int main(){
    vector<int> ans=even_odd_count(-12);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

    // Complete the following code given the task description and function signature.
