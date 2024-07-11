#include<vector>
using namespace std;

vector<pair<int,int>> pluck(vector<int> arr){
    int smallest = INT_MAX;
    int index = -1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2==0 && arr[i] < smallest){
            smallest = arr[i];
            index = i;
        }
    }
    return (smallest == INT_MAX) ? vector<pair<int,int>>{} : vector<pair<int,int>>({{smallest,index}});
}