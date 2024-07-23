if(array.size() == 0) return array;
    vector<int> sorted_array = array;
    int sum = array.front() + array.back();
    if(sum % 2 == 0){
        sort(sorted_array.rbegin(), sorted_array.rend());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}