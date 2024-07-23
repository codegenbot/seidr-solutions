if(array.empty()) return array;
    vector<int> sorted_array = array;
    sort(sorted_array.begin(), sorted_array.end(), [&](int a, int b){
        return (array.front() + array.back()) % 2 == 0 ? a > b : a < b;
    });
    return sorted_array;
}