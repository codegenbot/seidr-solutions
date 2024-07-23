if(array.empty()) return {};
    int sum = array.front() + array.back();
    if(sum % 2 == 1){
        sort(array.begin(), array.end());
    } else {
        sort(array.rbegin(), array.rend());
    }
    return array;
}