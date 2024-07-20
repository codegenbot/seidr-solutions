#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    vector<int> tri(4); // Define tri array with appropriate size
    tri = yourFunctionName(n); // Call your function with appropriate parameter
    assert(issame(tri , {1, 3})); // Check if the result is as expected
    return 0;
}