vector<int> result;
    for(int i=2; i<=n; i++){
        while(n%i == 0){
            result.push_back(i);
            n /= i;
        }
    }
    return result;
}