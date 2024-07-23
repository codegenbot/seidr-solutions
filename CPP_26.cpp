vector<int> remove_duplicates(vector<int> numbers){
    set<int> s;
    for(int i = 0; i < numbers.size(); i++){
        s.insert(numbers[i]);
    }
    vector<int> result;
    for(auto x : s) {
        result.push_back(x);
    }
    return result;
}