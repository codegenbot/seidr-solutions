vector<int> get_odd_collatz(int n){
    vector<int> collatz_seq; // to store the collatz sequence
    collatz_seq.push_back(n); // add the initial number to the sequence

    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        collatz_seq.push_back(n); // add the next number to the sequence
    }

    vector<int> odd_numbers; // to store the odd numbers in the collatz sequence

    // iterate over the collatz sequence and add the odd numbers to the odd_numbers vector
    for(int i = 0; i < collatz_seq.size(); i++){
        if(collatz_seq[i] % 2 != 0){
            odd_numbers.push_back(collatz_seq[i]);
        }
    }

    sort(odd_numbers.begin(), odd_numbers.end()); // sort the odd numbers in increasing order

    return odd_numbers;
}