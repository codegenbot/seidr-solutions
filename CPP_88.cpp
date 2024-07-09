#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
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

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));
    return 0;
}