vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(find(result.begin(), result.end(), numbers[i]) == result.end()){
            result.push_back(numbers[i]);
        }
    }
    return result;
}