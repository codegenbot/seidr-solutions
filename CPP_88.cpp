#include <vector>
#include <algorithm>
using namespace std;

bool same(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size();i++){
        if(a[i] != b[b.size()-1-i]) return false;
    }
    return true;
}

vector<int> sort_array(vector<int> array) {
    vector<int> sortedArray(array);
    sort(sortedArray.begin(),sortedArray.end());
    return sortedArray;
}