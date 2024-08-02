#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int> b){
    return a == b;
}

int main() {
    vector<int> output = pluck({7, 9, 7, 1});
    assert(issame(output, {})); 
    return 0;
}