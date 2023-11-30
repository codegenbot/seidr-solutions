#include <vector>

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // first element of the sequence is always 3

    if(n == 0){
        return sequence;
    }

    sequence.push_back(1); // second element of the sequence is always 1

    if(n == 1){
        return sequence;
    }

    sequence.push_back(2); // third element of the sequence is always 2

    if(n == 2){
        return sequence;
    }

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2);
        }else{
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

int main(){
    vector<int> result = tri(5);
    vector<int> expected = {3, 1, 2, 4, 6};

    if(issame(result, expected)){
        return 0;
    }else{
        return 1;
    }
}