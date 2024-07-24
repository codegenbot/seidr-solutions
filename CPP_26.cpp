vector<int> remove_duplicates(vector<int> numbers){
    vector<int> uniqueNumbers;
    for(auto num : numbers){
        if (count(numbers.begin(), numbers.end(), num) == 1){
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}