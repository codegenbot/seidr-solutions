std::vector<int> f(int n){
    std::vector<int> result;
    for(int i=1; i<=n; i++){
        result.push_back(i);
    }
    result.push_back(2*n);
    return result;
}