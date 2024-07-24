vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int mx = numbers[0];
    for(int i=0; i<numbers.size(); i++){
        mx = max(mx, numbers[i]);
        result.push_back(mx);
    }
    return result;
}