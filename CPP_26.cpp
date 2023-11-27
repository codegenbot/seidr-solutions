vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    
    for (int i = 0; i < numbers.size(); i++) {
        int num = numbers[i];
        
        if (count(numbers.begin(), numbers.end(), num) == 1) {
            result.push_back(num);
        }
    }
    
    return result;
}