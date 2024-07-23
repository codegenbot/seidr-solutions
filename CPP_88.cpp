sort_array(vector<int> array){
    int n = array.size();
    if(n == 0) return {};
    if((array[0] + array[n-1]) % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}