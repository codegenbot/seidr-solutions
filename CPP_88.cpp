if(array.empty()) return {};
    if((array[0] + array[array.size() - 1]) % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}