vector<int> remove_duplicates(vector<int> numbers){
    vector<int> unique_numbers;
    vector<int> encountered_numbers;
    for (int num : numbers) {
        if (find(encountered_numbers.begin(), encountered_numbers.end(), num) == encountered_numbers.end()) {
            unique_numbers.push_back(num);
            encountered_numbers.push_back(num);
        }
    }
    return unique_numbers;
}