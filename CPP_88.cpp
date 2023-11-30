vector<int> sort_array(vector<int> array){
    if(array.empty()){
        return array;
    }
    int sum = array.front() + array.back();
    if(sum % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    }
    else{
        sort(array.begin(), array.end());
    }
    return array;
}