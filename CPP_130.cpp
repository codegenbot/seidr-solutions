vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // Add the first element of the sequence
    
    if(n >= 1){
        sequence.push_back(1 + n / 2); // Add the second element of the sequence
    }
    
    if(n >= 2){
        sequence.push_back(sequence[1] + sequence[0]); // Add the third element of the sequence
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