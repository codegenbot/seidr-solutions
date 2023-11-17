/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
int s = 0;
for (int i = 0; i < lst.size(); i++)
{
if (i % 2 != 0 && lst[i] % 2 == 0)
{
s += lst[i];
}
}
return s;
}int main(){
vector<int> lst;
int n;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
int element;
scanf("%d", &element);
lst.push_back(element);
}
printf("%d\n", add(lst));
return 0;
}using namespace std;
