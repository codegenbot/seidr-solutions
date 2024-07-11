vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        int temp = num;
        bool hasEvenDigit = false;
        while(temp){
            if((temp % 10) % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}