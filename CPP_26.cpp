vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(auto num : numbers){
        if(count(result.begin(), result.end(), num) == 0){
            result.push_back(num);
        }
    }
    return result;
}