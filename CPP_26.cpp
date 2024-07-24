vector<int> remove_duplicates(vector<int> numbers){
    sort(numbers.begin(), numbers.end());
    unique_numbers.clear();
    for(int i = 0; i < numbers.size(); i++){
        if(i == 0 || numbers[i] != numbers[i-1]){
            unique_numbers.push_back(numbers[i]);
        }
    }

    return unique_numbers;
}