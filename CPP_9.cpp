bool issame(vector<int> a, vector<int> b){
    return a == b;
}
vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_so_far = numbers[0];
    result.push_back(max_so_far);
    
    for (int i = 1; i < numbers.size(); ++i) {
        max_so_far = max(max_so_far, numbers[i]);
        result.push_back(max_so_far);
    }
    
    return result;
}