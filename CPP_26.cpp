vector<int> remove_duplicates(vector<int> numbers){
    unordered_map<int, bool> mp;
    vector<int> result;

    for(int i = 0; i < numbers.size(); i++){
        if(mp.find(numbers[i]) == mp.end()){
            mp[numbers[i]] = true;
            result.push_back(numbers[i]);
        }
    }

    return result;
}