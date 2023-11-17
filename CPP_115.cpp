/*
You are given a rectangular grid of wells. Each row represents a single well,
and each 1 in a row represents a single unit of water.
Each well has a corresponding bucket that can be used to extract water from it, 
and all buckets have the same capacity.
Your task is to use the buckets to empty the wells.
Output the number of times you need to lower the buckets.

Example 1:
    Input: 
        grid : {{0,0,1,0}, {0,1,0,0}, {1,1,1,1}}
        bucket_capacity : 1
    Output: 6

Example 2:
    Input: 
        grid : {{0,0,1,1}, {0,0,0,0}, {1,1,1,1}, {0,1,1,1}}
        bucket_capacity : 2
    Output: 5

Example 3:
    Input: 
        grid : {{0,0,0}, {0,0,0}}
        bucket_capacity : 5
    Output: 0

Constraints:
    * all wells have the same length
    * 1 <= grid.length <= 10^2
    * 1 <= grid{:,1}.length <= 10^2
    * grid{i}{j} -> 0 | 1
    * 1 <= capacity <= 10
*/
#include<stdio.h>
#include<vector>
using namespace std;
int max_fill(vector<vector<int>> grid,int capacity){
        int n=grid.size();
        int m=grid[0].size();
        int max_fill=0,count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    max_fill+=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    count+=1;
                    if(count==capacity){
                        max_fill-=1;
                        count=0;
                    }
                }
            }
        }
        return max_fill;
    }
int main(){
    vector<vector<int>> grid;
    int n,m,k;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            scanf("%d",&k);
            temp.push_back(k);
        }
        grid.push_back(temp);
    }
    int capacity;
    scanf("%d",&capacity);
    printf("%d",max_fill(grid,capacity));
    return 0;
}
