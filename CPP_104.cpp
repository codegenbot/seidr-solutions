vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i=0; i<x.size(); i++){
        int num = x[i];
        int flag = 1;
        while(num>0){
            int digit = num%10;
            if(digit%2 == 0){
                flag = 0;
                break;
            }
            num /= 10;
        }
        if(flag == 1){
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}