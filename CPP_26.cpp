vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers){
        if(count(numbers.begin(), numbers.end(), num) == 1){
            result.push_back(num);
        }
    }
    return result;
}