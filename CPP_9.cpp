vector<int> broadcast(vector<int> input){
    vector<int> result;
    int size = input.size();
    
    for(int i = 0; i < size; i++){
        int num = input[i];
        for(int j = 0; j < num; j++){
            result.push_back(num);
        }
    }
    
    return result;
}