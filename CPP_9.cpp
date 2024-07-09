vector<int> rolling_max(vector<int> numbers){
    vector<int> res;
    int current_max = INT_MIN;
    for(int i = 0; i < numbers.size(); i++){
        current_max = max(current_max, numbers[i]);
        res.push_back(current_max);
    }
    return res;
}