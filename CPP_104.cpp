vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i=0; i<x.size(); i++){
        int n = x[i];
        bool hasEvenDigit = false;
        while(n>0){
            int digit = n%10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            n = n/10;
        }
        if(!hasEvenDigit){
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}