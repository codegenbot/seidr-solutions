```
vector<int> remove_duplicates(vector<int> numbers){
    unordered_map<int,int> mp;
    vector<int> result;

    for(int i = 0; i < numbers.size(); i++){
        if(mp.find(numbers[i]) == mp.end()){
            mp[numbers[i]] = 1;
            result.push_back(numbers[i]);
        }
    }

    return result;
}