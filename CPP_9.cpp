vector<int> rolling_max(vector<int> numbers){
    vector<int> max_numbers;
    int max_num = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_num = max(max_num, numbers[i]);
        max_numbers.push_back(max_num);
    }
    return max_numbers;
}