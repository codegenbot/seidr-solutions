vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3); // First element of the Tribonacci sequence is always 3

    if(n == 0) return sequence; // If n is 0, return the sequence with only 1 element

    sequence.push_back(1); // Second element of the Tribonacci sequence is always 1

    if(n == 1) return sequence; // If n is 1, return the sequence with 2 elements

    sequence.push_back(2); // Third element of the Tribonacci sequence is always 2

    if(n == 2) return sequence; // If n is 2, return the sequence with 3 elements

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2); // If i is even, add 1 + i / 2 to the sequence
        }
        else{
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]); // If i is odd, add tri(i - 1) + tri(i - 2) + tri(i + 1) to the sequence
        }
    }

    return sequence;
}