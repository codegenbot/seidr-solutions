vector<int> tri(int n){
    vector<int> result(n + 1);
    result[1] = 3;
    result[2] = 1 + n / 2;
    for(int i = 3; i <= n; ++i){
        if(i % 2 == 0){
            result[i] = 1 + i / 2;
        }else{
            result[i] = result[i - 1] + result[i - 2] + result[i + 1];
        }
    }
    return result;
}