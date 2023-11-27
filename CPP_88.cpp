#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> array){
    vector<int> sortedArray = array;
    
    if(sortedArray.empty()){
        return sortedArray;
    }
    
    int sum = sortedArray[0] + sortedArray[sortedArray.size() - 1];
    
    if(sum % 2 == 0){
        sort(sortedArray.rbegin(), sortedArray.rend());
    }
    else{
        sort(sortedArray.begin(), sortedArray.end());
    }
    
    return sortedArray;
}

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    return a == b;
}

int main() {
    assert(issame(sort_array(vector<int>({21, 14, 23, 11})), vector<int>({23, 21, 14, 11})));

    return 0;
}