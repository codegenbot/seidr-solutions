vector<int> even_odd_count(int num){
    vector<int> result(2, 0);
    string numString = to_string(abs(num));
    for(int i = 0; i < numString.length(); i++){
        int digit = numString[i] - '0';
        if(digit % 2 == 0){
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}