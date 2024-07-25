```cpp
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> sort_array(vector<int> array) {
    int sum = accumulate(array.begin(), array.end(), 0);
    if (sum % 2 == 1) {
        sort(array.begin(), array.end());
    } else {
        sort(array.rbegin(), array.rend());
    }
    return array;
}

int main() {
     assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
}