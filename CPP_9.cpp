vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int current_max = INT_MIN;
    for(int num : numbers){
        if(num > current_max){
            current_max = num;
        }
        result.push_back(current_max);
    }
    return result;
}