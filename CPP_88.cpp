if(array.empty()){
        return {};
    }
    
    int sum = array.front() + array.back();
    if(sum % 2 != 0){
        sort(array.begin(), array.end());
    } else {
        sort(array.begin(), array.end(), greater<int>());
    }
    
    return array;
}