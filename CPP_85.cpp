/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples: add({4, 2, 6, 7}) ==> 2 
*/
#include<iostream>
#include<vector>

using namespace std;
int add(vector<int> lst)
{
    int result=0;
    for(int i=0;i<lst.size();i++)
    {
        if(i%2!=0 && lst[i]%2==0)
        {
            result+=lst[i];
        }
    }
    return result;
}
int main(){
    vector<int> lst={4,2,6,7};
    cout<<add(lst);
}
