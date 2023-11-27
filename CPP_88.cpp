vector<int> sort_array(vector<int> array){
    vector<int> result = array;
    if (result.empty()){
        return result;
    }
    int sum = result[0] + result[result.size()-1];
    if (sum % 2 == 0){
        sort(result.begin(), result.end(), greater<int>());
    } else {
        sort(result.begin(), result.end());
    }
    return result;
}