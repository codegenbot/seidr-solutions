vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            result.push_back(numbers[i]);
        }
    }
    return result;
}