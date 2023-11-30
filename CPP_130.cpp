#include <vector>

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3);
    
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            sequence.push_back(1 + i/2);
        }
        else{
            sequence.push_back(sequence[i-1] + sequence[i-2] + sequence[i+1]);
        }
    }
    
    return sequence;
}