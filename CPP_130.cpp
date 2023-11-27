vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // add the first element of the sequence
    
    if(n == 0){
        return sequence; // return the sequence with only the first element
    }
    
    sequence.push_back(1 + n/2); // add the second element of the sequence
    
    if(n == 1){
        return sequence; // return the sequence with the first two elements
    }
    
    int prev1 = 3; // initialize the previous element 1
    int prev2 = 2; // initialize the previous element 2
    int prev3 = 1 + n/2; // initialize the previous element 3
    
    for(int i = 3; i <= n; i++){
        int current = prev1 + prev2 + prev3; // calculate the current element
        sequence.push_back(current); // add the current element to the sequence
        
        prev1 = prev2; // update the previous element 1
        prev2 = prev3; // update the previous element 2
        prev3 = current; // update the previous element 3
    }
    
    return sequence; // return the complete sequence
}