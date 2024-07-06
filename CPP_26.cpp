std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::set<int> result;
    for(int i = 0; i < numbers.size(); i++){
        if(result.insert(numbers[i]).second){
            result.insert(numbers[i]);
        }
    }
    return std::vector<int>(result.begin(), result.end());
}