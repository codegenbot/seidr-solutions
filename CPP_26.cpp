vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

bool issame(vector<int> numbers, vector<int> expected_output) {
    vector<int> actual_output = remove_duplicates(numbers);
    return actual_output == expected_output;
}