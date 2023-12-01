vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // First element of the sequence is always 3

    if(n == 0) return sequence; // If n is 0, return the sequence with only the first element

    sequence.push_back(1 + n / 2); // Second element of the sequence

    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2); // If i is even, add the corresponding value to the sequence
        }
        else{
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]); // If i is odd, calculate the value based on the previous elements
        }
    }

    return sequence;
}