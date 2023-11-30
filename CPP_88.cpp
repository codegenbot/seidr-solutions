vector<int> sort_array(vector<int> array){
    vector<int> sortedArray = array;
    if (sortedArray.size() <= 1) {
        return sortedArray;
    }
    if ((sortedArray[0] + sortedArray[sortedArray.size() - 1]) % 2 == 0) {
        sort(sortedArray.rbegin(), sortedArray.rend());
    } else {
        sort(sortedArray.begin(), sortedArray.end());
    }
    return sortedArray;
}