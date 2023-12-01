#include <vector>
#include <cassert>

vector<int> tri(int n);

bool issame(vector<int> a, vector<int> b);

int main(){
    assert(issame(tri(1), {1, 3}));
    // additional code
}

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3);
    if (n == 0){
        return sequence;
    }
    sequence.push_back(1 + n / 2);
    if (n == 1){
        return sequence;
    }
    sequence.push_back(sequence[1] + sequence[0]);
    for(int i = 2; i <= n; i++){
        if (i % 2 == 0){
            sequence.push_back(1 + i / 2);
        }
        else{
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
        }
    }
    return sequence;
}

bool issame(vector<int> a, vector<int> b){
    // implementation code of the function
}