vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find(begin(result), end(result), num) == end(result)) {
            result.push_back(num);
        }
    }
    return result;
}