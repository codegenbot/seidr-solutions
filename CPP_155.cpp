vector<int> even_odd_count(int num){
    int even_count = 0;
    int odd_count = 0;
    int digit;
    
    num = abs(num);
    
    while(num != 0){
        digit = num % 10;
        if(digit % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
        num = num / 10;
    }
    
    vector<int> result;
    result.push_back(even_count);
    result.push_back(odd_count);
    
    return result;
}