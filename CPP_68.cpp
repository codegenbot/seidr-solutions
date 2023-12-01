#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> pluck(vector<int> arr);
bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestValue = INT_MAX;
    int smallestIndex = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallestValue){
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestIndex != -1){
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}

int main(){
    assert (issame(pluck({7, 9, 7, 1}) , {}));
    assert (issame(pluck({1, 2, 3}) , {2, 1}));
    assert (issame(pluck({1, 3, 5}) , {}));
    assert (issame(pluck({2, 4, 6, 8, 10}) , {2, 0}));
    
    return 0;
}