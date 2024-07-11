vector<int> sort_array(vector<int> array){
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0) {
        vector<int> result = array;
        std::sort(result.begin(), result.end());
        std::reverse(result.begin(), result.end());
        return result;
    } else {
        vector<int> result = array;
        std::sort(result.begin(), result.end());
        return result;
    }
}