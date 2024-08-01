vector<int> remove_duplicates(vector<int> numbers){
    set<int> numbersSet(numbers.begin(), numbers.end());
    vector<int> uniqueNumbers(numbersSet.begin(), numbersSet.end());
    return uniqueNumbers;
}