vector<int> remove_duplicates(vector<int> numbers){
    unordered_map<int,int> mp;
    vector<int> result;

    for(auto num : numbers) {
        if(mp[num] == 0) {
            result.push_back(num);
            mp[num]++;
        }
    }

    return result;
}