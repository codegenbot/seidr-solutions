vector<int> generate_integers(int a, int b){
    vector<int> result;
    for(int num = a; num <= b; ++num){
        int original_num = num;
        while(num > 0){
            int digit = num % 10;
            if(digit % 2 == 0){
                result.push_back(original_num);
                break;
            }
            num /= 10;
        }
    }
    return result;
}