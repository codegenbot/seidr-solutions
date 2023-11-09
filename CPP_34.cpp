/*
Return sorted unique elements in a vector
>>> unique({5, 3, 5, 2, 3, 3, 9, 0, 123})
{0, 2, 3, 5, 9, 123}
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    vector<int> unique;
    unique.push_back(l[0]);
    for(int i = 1; i < l.size(); i++){
        if(l[i] != unique[unique.size()-1]){
            unique.push_back(l[i]);
        }
    }
    return unique;
}
