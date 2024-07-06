vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i : x){
        bool hasEven = false;
        int n = i;
        while(n > 0){
            if((n % 10) % 2 == 0)
                hasEven = true;
            n /= 10;
        }
        if(!hasEven)
            result.push_back(i);
    }
    sort(result.begin(), result.end());
    return result;
}