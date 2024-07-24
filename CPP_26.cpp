vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        bool exists = false;
        for(int j = 0; j < result.size(); j++){
            if(result[j] == numbers[i]){
                exists = true;
                break;
            }
        }
        if(!exists){
            result.push_back(numbers[i]);
        }
    }
    return result;
}