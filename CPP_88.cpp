if(array.empty()) return array;
    vector<int> sorted = array;
    if((array.front() + array.back()) % 2 == 0) {
        sort(sorted.rbegin(), sorted.rend());
    } else {
        sort(sorted.begin(), sorted.end());
    }
    return sorted;
}