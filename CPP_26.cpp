Here is the solution:

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        bool duplicate = false;
        for(int j = 0; j < result.size(); j++){
            if(result[j] == numbers[i]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            result.push_back(numbers[i]);
        }
    }
    return result;
}