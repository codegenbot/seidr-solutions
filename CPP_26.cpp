vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        bool duplicate = false;
        for(int j = 0; j < result.size(); j++){
            if(numbers[i] == result[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

bool issame(vector<int> a,vector<int>b){ 
}