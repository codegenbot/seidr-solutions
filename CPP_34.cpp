#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> unique(vector<int> l){
    vector<int> result;
    for(int i = 0; i < l.size(); i++){
        if(find(result.begin(), result.end(), l[i]) == result.end()){
            result.push_back(l[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}