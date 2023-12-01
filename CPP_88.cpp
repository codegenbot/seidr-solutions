vector<int> sort_array(vector<int> array){
    if(array.empty()){
        return array;
    }
    
    int first = array[0];
    int last = array[array.size() - 1];
    
    if((first + last) % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    }
    else{
        sort(array.begin(), array.end());
    }
    
    return array;
}