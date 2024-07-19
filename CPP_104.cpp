vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        int temp = num;
        bool evenDigit = false;
        while(temp > 0){
            if(temp % 2 == 0){
                evenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!evenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}