vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

bool issame(vector<int> numbers1, vector<int> numbers2){
    vector<int> unique_numbers1 = remove_duplicates(numbers1);
    vector<int> unique_numbers2 = remove_duplicates(numbers2);
    
    if(unique_numbers1.size() != unique_numbers2.size()){
        return false;
    }
    
    sort(unique_numbers1.begin(), unique_numbers1.end());
    sort(unique_numbers2.begin(), unique_numbers2.end());
    
    for(int i=0; i<unique_numbers1.size(); i++){
        if(unique_numbers1[i] != unique_numbers2[i]){
            return false;
        }
    }
    
    return true;
}