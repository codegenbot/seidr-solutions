vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if((array.front() + array.back()) % 2 == 0){
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}