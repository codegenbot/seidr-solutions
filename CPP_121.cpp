/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
solution({30, 13, 24, 321}) ==>0
*/
#include <vector>
#include <iostream>
using namespace std;
int solutions(vector<int> lst){
    int sum=0;
    for(int i=0;i<lst.size();i++){
        if(lst[i]%2==0 && i%2==0){
            sum+=lst[i];
        }
    }
    return sum;
}
int main(){
    vector<int> lst;
    lst.push_back(2);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(5);
    cout<<solutions(lst);
}
