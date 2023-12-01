vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    int size = numbers.size();
    for(int i=0; i<size; i++){
        result.push_back(numbers[i]);
        if(i != size-1){
            result.push_back(delimeter);
        }
    }
    return result;
}