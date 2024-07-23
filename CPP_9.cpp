vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int n = numbers.size();
    int mx = INT_MIN;

    for(int i=0; i<n; i++){
        mx = max(mx, numbers[i]);
        result.push_back(mx);
    }

    return result;
}