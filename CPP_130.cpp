#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> tri(int n){
    vector<int> sequence(n+1);
    sequence[0] = 3;
    if(n >= 1){
        sequence[1] = 1 + n / 2;
    }
    if(n >= 2){
        sequence[2] = sequence[0] + sequence[1] + sequence[1];
    }
    if(n >= 3){
        for(int i = 3; i <= n; i++){
            sequence[i] = sequence[i-1] + sequence[i-2] + sequence[i-3];
        }
    }
    return sequence;
}

int main() {
    assert(issame(tri(1) , {1, 3}));
    assert(issame(tri(2) , {1, 3, 7}));
    assert(issame(tri(3) , {1, 3, 7, 14}));
    
    cout << "All test cases pass!" << endl;

    return 0;
}