/*
From a vector of integers, remove all elements that occur more than once.
Keep order of elements left the same as in the input.
>>> remove_duplicates({1, 2, 3, 2, 4})
{1, 3, 4}
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> remove_duplicates(vector<int> numbers){
vector<int> result;
vector<int>::iterator it;
for(it=numbers.begin();it!=numbers.end();it++){
if(find(result.begin(),result.end(),*it)==result.end())
result.push_back(*it);
}
return result;
}
int main(){
vector<int> numbers;
int n,i,x;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
numbers.push_back(x);
}
vector<int> result=remove_duplicates(numbers);
for(i=0;i<result.size();i++){
printf("%d ",result[i]);
}
return 0;
}
