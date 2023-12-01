#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // first element is always 3
    
    if(n == 0){
        return sequence; // return vector with only the first element
    }
    
    sequence.push_back(1 + n / 2); // second element
    
    if(n == 1){
        return sequence; // return vector with first two elements
    }
    
    sequence.push_back(sequence[0] + sequence[1]); // third element
    
    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i - 3]);
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

int main(){
    assert(issame(tri(1), {1, 3}));
    return 0;
}