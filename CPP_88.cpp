if(array.empty()) return array;
vector<int> sorted_array = array;
sort(sorted_array.begin(), sorted_array.end(), [&](int a, int b) {
    if((sorted_array.front() + sorted_array.back()) % 2 == 0) {
        return a > b;
    } else {
        return a < b;
    }
});
return sorted_array;
}