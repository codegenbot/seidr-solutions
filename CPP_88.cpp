if(array.empty()) return array;
    int sum = array.front() + array.back();
    if(sum % 2 == 0) {
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}