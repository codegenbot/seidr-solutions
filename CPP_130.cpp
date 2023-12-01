#include <vector>

using namespace std;

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // add the first element of the sequence

    if(n == 0){
        return sequence; // return the sequence with only the first element
    }

    sequence.push_back(1 + n / 2); // add the second element of the sequence

    if(n == 1){
        return sequence; // return the sequence with the first two elements
    }

    sequence.push_back(sequence[1] + sequence[0]); // add the third element of the sequence

    if(n == 2){
        return sequence; // return the sequence with the first three elements
    }

    for(int i = 3; i <= n; i++){
        int nextElement;

        if(i % 2 == 0){
            nextElement = 1 + i / 2;
        } else {
            nextElement = sequence[i - 1] + sequence[i - 2] + sequence[i + 1];
        }

        sequence.push_back(nextElement); // add the next element of the sequence
    }

    return sequence; // return the complete sequence
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

int main(){
    assert(issame(tri(1), {1, 3}));
    assert(issame(tri(2), {1, 3, 4}));
    assert(issame(tri(3), {1, 3, 4, 10}));
    assert(issame(tri(4), {1, 3, 4, 10, 11}));
    assert(issame(tri(5), {1, 3, 4, 10, 11, 21}));

    return 0;
}