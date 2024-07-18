if (array.empty()) {
        return array;
    }
    
    vector<int> result = array;
    
    if ((array.front() + array.back()) % 2 == 0) {
        sort(result.rbegin(), result.rend());
    } else {
        sort(result.begin(), result.end());
    }
    
    return result;
}