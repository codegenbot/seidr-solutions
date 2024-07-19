vector<int> unique_digits(vector<int> x){
    vector<int> result;
    
    for (int num : x) {
        int temp = num;
        bool flag = true;
        
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                flag = false;
                break;
            }
            temp /= 10;
        }
        
        if (flag) {
            result.push_back(num);
        }
    }
    
    sort(result.begin(), result.end());
    return result;
}