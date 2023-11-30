vector<int> collatz(int n){
    vector<int> sequence;
    while(n != 1){
        sequence.push_back(n);
        if(n % 2 == 0){
            n = n / 2;
        }else{
            n = 3 * n + 1;
        }
    }
    sequence.push_back(1);
    return sequence;
}

vector<int> get_odd_collatz(int n){
    vector<int> odd_collatz;
    vector<int> collatz_sequence = collatz(n);
    for(int i = 0; i < collatz_sequence.size(); i++){
        if(collatz_sequence[i] % 2 != 0){
            odd_collatz.push_back(collatz_sequence[i]);
        }
    }
    sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}