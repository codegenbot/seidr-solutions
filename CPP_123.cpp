vector<int> collatz_sequence;
collatz_sequence.push_back(n);

while(n != 1){
    if(n % 2 == 0){
        n = n / 2;
    }
    else{
        n = 3 * n + 1;
    }
    collatz_sequence.push_back(n);
}

vector<int> odd_numbers;

for(int i = 0; i < collatz_sequence.size(); i++){
    if(collatz_sequence[i] % 2 != 0){
        odd_numbers.push_back(collatz_sequence[i]);
    }
}

sort(odd_numbers.begin(), odd_numbers.end());

return odd_numbers;