vector<int> make_a_pile(int n){
    vector<int> result;
    result.push_back(n);
    while(n > 1){
        if(n % 2 == 0){
            n += 1;
        }
        else{
            n += 2;
        }
        result.push_back(n);
    }
    return result;
}