#include <iostream>
#include <vector>
using namespace std;

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3);

    if(n >= 1){
        sequence.push_back(1 + n / 2);
    }

    if(n >= 2){
        sequence.push_back(sequence[1] + sequence[0] + sequence[2]);
    }

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2);
        }
        else{
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
        }
    }

    return sequence;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

int main() {
    assert (issame(tri(0), {3}));
    assert (issame(tri(1), {3, 2}));
    assert (issame(tri(2), {3, 2, 8}));
    assert (issame(tri(3), {3, 2, 8, 8}));
    assert (issame(tri(4), {3, 2, 8, 8, 4}));
    assert (issame(tri(5), {3, 2, 8, 8, 4, 21}));
    assert (issame(tri(6), {3, 2, 8, 8, 4, 21, 23}));
    assert (issame(tri(7), {3, 2, 8, 8, 4, 21, 23, 56}));
    assert (issame(tri(8), {3, 2, 8, 8, 4, 21, 23, 56, 68}));
    assert (issame(tri(9), {3, 2, 8, 8, 4, 21, 23, 56, 68, 128}));
    
    cout << "All test cases pass." << endl;
    
    return 0;
}