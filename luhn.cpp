int luhn(vector<int> digits) {
    int sum = 0;
    for(int i=0; i<digits.size(); i++) {
        if((i+1)%2!=0) {
            sum += digits[i];
        } else {
            int temp = 2*digits[i];
            if(temp > 9) {
                temp -= 9;
            }
            sum += temp;
        }
    }
    return sum;
}