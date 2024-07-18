vector<int> make_a_pile(int n){
    vector<int> result;
    result.push_back(n);
    for(int i = 1; i < n; ++i){
        n = n % 2 ? n + 2 : n + 1;
        result.push_back(n);
    }
    return result;
}