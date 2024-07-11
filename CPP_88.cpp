if(array.size() == 0) return {};
    
    int sum = array[0] + array[array.size() - 1];
    
    if(sum % 2 == 0){
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    
    return array;
}