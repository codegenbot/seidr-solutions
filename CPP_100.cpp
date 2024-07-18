vector<int> make_a_pile(int n){
    vector<int> result;
    result.push_back(n);
    for(int i = 2; i <= n; i++){
        n = (n % 2 == 0) ? n + i : n + i + 1;
        result.push_back(n);
    }
    return result;
}