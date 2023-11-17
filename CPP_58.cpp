/*
Return sorted unique common elements for two vectors.
>>> common({1, 4, 3, 34, 653, 2, 5}, {5, 7, 1, 5, 9, 653, 121})
{1, 5, 653}
>>> common({5, 3, 2, 8}, {3, 2})
{2, 3}

*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> common(vector<int> l1,vector<int> l2){
    vector<int> l3;
    sort(l1.begin(),l1.end());
    sort(l2.begin(),l2.end());
    int i=0,j=0;
    while(i<l1.size() && j<l2.size()){
        if(l1[i]==l2[j]){
            l3.push_back(l1[i]);
            i++;
            j++;
        }
        else if(l1[i]<l2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return l3;
}
int main(){
    vector<int> l1,l2;
    int n,m,i,j,k,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        l1.push_back(num);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&num);
        l2.push_back(num);
    }
    vector<int> l3=common(l1,l2);
    for(i=0;i<l3.size();i++){
        printf("%d ",l3[i]);
    }
    printf("\n");
}
