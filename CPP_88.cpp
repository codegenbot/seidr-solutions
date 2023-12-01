vector<int> sort_array(vector<int> array){
    vector<int> sorted_array(array);
    int n = sorted_array.size();
    if(n == 0){
        return sorted_array;
    }
    int sum = sorted_array[0] + sorted_array[n-1];
    if(sum % 2 == 0){
        sort(sorted_array.rbegin(), sorted_array.rend());
    }else{
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}