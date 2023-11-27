vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // first element is always 3
    
    if(n == 0){
        return sequence; // return sequence with only first element
    }
    
    sequence.push_back(1); // second element is always 1
    
    if(n == 1){
        return sequence; // return sequence with first two elements
    }
    
    sequence.push_back(2); // third element is always 2
    
    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2); // calculate even element
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]); // calculate odd element
        }
    }
    
    return sequence; // return complete sequence
}