#include <vector>
#include <assert.h>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a.size() == b.size();
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if(arr.empty()) return {};
    int smallest_even = INT_MAX;
    int index = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }
    result.push_back(smallest_even);
    result.push_back(index);
    return result;
}

int main() {
    assert (issame({},{}) );
    vector<int> v = {7, 9, 7, 1};
    assert (issame(pluck(v) , {}));  
    return 0;
}