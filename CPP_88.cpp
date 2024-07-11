if(array.empty()) return array;
    vector<int> sortedArray = array;
    if((array.front() + array.back()) % 2 == 0)
        sort(sortedArray.rbegin(), sortedArray.rend());
    else
        sort(sortedArray.begin(), sortedArray.end());
    return sortedArray;
}