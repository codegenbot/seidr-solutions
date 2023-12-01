vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // Adding the first element of the sequence
    if(n > 0){
        sequence.push_back(1 + n / 2); // Adding the second element of the sequence
    }
    if(n > 1){
        sequence.push_back(sequence[0] + sequence[1] + sequence[2]); // Adding the third element of the sequence
    }
    if(n > 2){
        for(int i = 3; i <= n; i++){
            if(i % 2 == 0){
                sequence.push_back(1 + i / 2); // Adding even indexed elements
            } else {
                sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i - 3]); // Adding odd indexed elements
            }
        }
    }
    return sequence;
}