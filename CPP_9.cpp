// Add missing semicolon after function signature in line 12
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

// Declare 'rolling_max' function above 'issame' function
vector<int> rolling_max(vector<int> numbers);

// Implement 'rolling_max' function below 'issame' function
vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}