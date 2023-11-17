    // Your code here.
    return result;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    vector<vector<int> > grid;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            scanf("%d",&x);
            temp.push_back(x);
        }
        grid.push_back(temp);
    }
    vector<int> result=minPath(grid,k);
    for(int i=0;i<result.size();i++){
        printf("%d ",result[i]);
    }
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
