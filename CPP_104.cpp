vector<int> unique_digits(vector<int> x){
    vector<int> res;
    for(int num : x){
        bool onlyOdd = true;
        int temp = num;
        while(temp > 0){
            int digit = temp % 10;
            if(digit % 2 == 0){
                onlyOdd = false;
                break;
            }
            temp /= 10;
        }
        if(onlyOdd){
            res.push_back(num);
        }
    }
    sort(res.begin(), res.end());
    return res;
}