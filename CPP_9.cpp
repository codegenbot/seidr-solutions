vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int cur_max = numbers[0];
    result.push_back(cur_max);
    for(int i = 1; i < numbers.size(); i++){
        cur_max = max(cur_max, numbers[i]);
        result.push_back(cur_max);
    }
    return result;
}