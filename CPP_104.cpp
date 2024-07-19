vector<int> unique_digits(vector<int> x){
    vector<int> result;
    
    for(int num : x){
        int curr = num;
        bool has_even_digit = false;
        
        while(curr > 0){
            if(curr % 2 == 0){
                has_even_digit = true;
                break;
            }
            curr /= 10;
        }
        
        if(!has_even_digit){
            result.push_back(num);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}