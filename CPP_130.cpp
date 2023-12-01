#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3);
    
    if(n > 0)
        sequence.push_back(1 + n / 2);
    
    if(n > 1)
        sequence.push_back(sequence[0] + sequence[1] + sequence[2]);
    
    if(n > 2){
        for(int i = 3; i <= n; i++){
            if(i % 2 == 0){
                sequence.push_back(1 + i / 2);
            } else {
                sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i - 3]);
            }
        }
    }
    
    return sequence;
}

int main(){
    assert(issame(tri(1), {1, 3}));
    assert(issame(tri(2), {1, 3, 7}));
    assert(issame(tri(3), {1, 3, 7, 18}));
    assert(issame(tri(4), {1, 3, 7, 18, 46}));

    return 0;
}