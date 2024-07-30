vector<int> rolling_max(vector<int> numbers);
bool issame(vector<int> a, vector<int> b);
vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int maxNum = numbers[0];
    result.push_back(maxNum);
    for(int i = 1; i < numbers.size(); i++){
        maxNum = max(maxNum, numbers[i]);
        result.push_back(maxNum);
    }
    return result;
}