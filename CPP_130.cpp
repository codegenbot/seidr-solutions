vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // Adding the first element of the sequence

    if(n == 0){
        return sequence; // Return the sequence with only the first element
    }

    sequence.push_back(1 + n / 2); // Adding the second element of the sequence

    if(n == 1){
        return sequence; // Return the sequence with two elements
    }

    sequence.push_back(sequence[0] + sequence[1]); // Adding the third element of the sequence

    if(n == 2){
        return sequence; // Return the sequence with three elements
    }

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2); // Adding an even element to the sequence
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]); // Adding an odd element to the sequence
        }
    }

    return sequence; // Return the complete sequence
}