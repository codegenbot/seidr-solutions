vector<int> rolling_max(vector<int> numbers){
    vector<int> max_values;
    int rolling_max = numbers[0];
    max_values.push_back(rolling_max);

    for(int i = 1; i < numbers.size(); i++){
        rolling_max = max(rolling_max, numbers[i]);
        max_values.push_back(rolling_max);
    }

    return max_values;
}