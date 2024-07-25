if(array.empty()) return array;
    
    int sum = array.front() + array.back();
    vector<int> sorted_array = array;
    
    if(sum % 2 == 0) {
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    
    return sorted_array;
}