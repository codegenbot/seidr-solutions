vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find_if(result.begin(), result.end(), bind1st(ptr_fun(int_equal), num)) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}