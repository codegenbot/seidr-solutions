vector<int> remove_duplicates(vector<int> numbers){
    vector<int> unique_numbers;
    for(int num : numbers){
        if(unique_index(num, unique_numbers) == unique_numbers.size()){
            unique_numbers.push_back(num);
        }
    }
    return unique_numbers;
}

int unique_index(int num, vector<int>& vec){
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == num)
            return i;
    }
    return -1;
}