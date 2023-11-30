vector<int> rolling_max(vector<int> numbers){
    vector<int> rolling_max;
    int max_num = numbers[0];
    rolling_max.push_back(max_num);
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
        rolling_max.push_back(max_num);
    }
    return rolling_max;
}