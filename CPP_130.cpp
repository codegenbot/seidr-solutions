#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // tri(1) = 3

    if(n >= 1){
        sequence.push_back(1 + n / 2); // tri(2) = 1 + n / 2
    }

    if(n >= 2){
        sequence.push_back(sequence[1] + sequence[0]); // tri(3) = tri(2) + tri(1) + tri(4)
    }

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2); // tri(n) = 1 + n / 2, if n is even
        } else {
            if((i - 1) >= sequence.size() || (i - 2) >= sequence.size() || (i + 1) >= sequence.size()) {
                sequence.push_back(0); // tri(n) = 0, if i - 1, i - 2, or i + 1 is out of the sequence range
            } else {
                sequence.push_back(sequence[i-1] + sequence[i-2] + sequence[i+1]); // tri(n) = tri(n - 1) + tri(n - 2) + tri(n + 1), if n is odd
            }
        }
    }

    return sequence;
}

int main() {
    assert (issame(::tri(1) , {1, 3}));
    return 0;
}