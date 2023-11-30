vector<int> tri(int n){
    vector<int> result;
    if(n >= 0){
        result.push_back(3); // add the first element of Tribonacci sequence
        if(n >= 1){
            result.push_back(1 + n / 2); // add the second element of Tribonacci sequence
            if(n >= 2){
                result.push_back(result[1] + result[0] + result[0]); // add the third element of Tribonacci sequence
                for(int i = 3; i <= n; i++){
                    if(i % 2 == 0){
                        result.push_back(1 + i / 2); // add even elements of Tribonacci sequence
                    }else{
                        result.push_back(result[i-1] + result[i-2] + result[i-3]); // add odd elements of Tribonacci sequence
                    }
                }
            }
        }
    }
    return result;
}