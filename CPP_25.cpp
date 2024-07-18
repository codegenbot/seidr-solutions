#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    
    cout << "Test passed!" << endl;
    
    return 0;
}
