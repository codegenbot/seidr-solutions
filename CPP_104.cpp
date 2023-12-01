vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i = 0; i < x.size(); i++){
        int number = x[i];
        bool containsEvenDigit = false;
        while(number > 0){
            int digit = number % 10;
            if(digit % 2 == 0){
                containsEvenDigit = true;
                break;
            }
            number /= 10;
        }
        if(!containsEvenDigit){
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}