vector<int> remove_duplicates(vector<int> numbers){
    vector<int> uniqueNumbers;
    for(int i = 0; i < numbers.size(); i++){
        bool isUnique = true;
        for(int j = 0; j < uniqueNumbers.size(); j++){
            if(numbers[i] == uniqueNumbers[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            uniqueNumbers.push_back(numbers[i]);
        }
    }
    return uniqueNumbers;
}