/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
    int sum=0;
    for(int i=0;i<lst.size();i++)
        if(lst[i]%2==0 && i%2!=0){
            sum=sum+lst[i];
        }
    return sum;
}
int main(){
{
    int n;
    vector<int> v;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        v.push_back(x);
    }
    printf("%d\n",add(v));
    return 0;
}
using namespace std;
int add(vector<int> lst){
