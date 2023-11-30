vector<int> sort_array(vector<int> array){
    vector<int> sortedArray = array;
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0){
        sort(sortedArray.rbegin(), sortedArray.rend());
    } else {
        sort(sortedArray.begin(), sortedArray.end());
    }
    return sortedArray;
}