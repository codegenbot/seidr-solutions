vector<int> remove_duplicates(vector<int> numbers) {
    if (numbers.empty()) return {};

    unique_numbers.push_back(numbers[0]);
    
    for(int i = 1; i < numbers.size(); i++){
        bool isDuplicate = false;
        for(int j = 0; j < unique_numbers.size(); j++){
            if(unique_numbers[j] == numbers[i]){
                isDuplicate = true;
                break;
            }
        }
        
        if(!isDuplicate)
            unique_numbers.push_back(numbers[i]);
    }

    return unique_numbers;
}