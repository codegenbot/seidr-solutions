int luhn(vector<int>& numbers) {
    int sum = 0;
    for(int i=numbers.size()-1; i>=0; --i){
        if(i%2 != 0) {
            int digit = numbers[i] * 2;
            if(digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += numbers[i];
        }
    }
    return sum;
}