vector<int> remove_duplicates(vector<int> numbers){
    unordered_map<int, bool> seen;
    vector<int> result;

    for(int i = 0; i < numbers.size(); i++){
        if(seen.find(numbers[i]) == seen.end()){
            seen[numbers[i]] = true;
            result.push_back(numbers[i]);
        }
    }

    return result;
}