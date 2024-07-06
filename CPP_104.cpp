vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i: x){
        int num = i;
        bool has_even_digit = false;
        while(num > 0){
            if((num%10)%2 == 0) has_even_digit = true; 
            num /= 10;
        }
        if(!has_even_digit) result.push_back(i);
    }
    sort(result.begin(), result.end());
    return result;
}