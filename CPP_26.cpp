vector<int> remove_duplicates(vector<int> numbers){
    vector<int> uniqueNumbers;
    for(int i = 0; i < numbers.size(); i++){
        bool found = false;
        for(int j = 0; j < uniqueNumbers.size(); j++){
            if(uniqueNumbers[j] == numbers[i]){
                found = true;
                break;
            }
        }
        if(!found){
            uniqueNumbers.push_back(numbers[i]);
        }
    }
    return uniqueNumbers;
}