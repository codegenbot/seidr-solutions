#include <vector>
#include <cassert>

using namespace std;

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3);

    if(n >= 1){
        sequence.push_back(1 + n / 2);
    }

    if(n >= 2){
        sequence.push_back(sequence[1] + sequence[0] + sequence[0]);
    }

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
        }
    }

    return sequence;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(tri(1), {1, 3}));
    assert(issame(tri(2), {1, 2, 3}));
    assert(issame(tri(3), {1, 2, 3, 8}));

    return 0;
}