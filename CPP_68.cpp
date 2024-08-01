#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> pluck(vector<int> arr);

int main(){
    assert(issame(pluck({7, 9, 7, 1}), {}));
    
    return 0;
}