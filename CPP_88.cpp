if(array.empty()) return array;
    vector<int> sorted_array = array;
    if((sorted_array.front() + sorted_array.back()) % 2 == 0)
        sort(sorted_array.rbegin(), sorted_array.rend());
    else
        sort(sorted_array.begin(), sorted_array.end());
    return sorted_array;
}