if(array.empty()) return array;
    if((array.front() + array.back()) % 2 == 0) {
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}