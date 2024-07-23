#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int testMain() {
    assert(same({1,2,3,5},{-1,2,3,4})=={2,0,0,1});
    return 0;
}

bool same(vector<int> a,vector<int>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

vector<int> compare(vector<int>a, vector<int>b) {
    int count1 = 0, count2 = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] > b[i]) 
            count1++;
        else if (a[i] < b[i])
            count2++;
    }
    return {count1, count2, a.size()-count1-count2};
}