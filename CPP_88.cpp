bool is_odd_sum(vector<int> array) {
    return (array.front() + array.back()) % 2 != 0;
}

vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if (is_odd_sum(sorted_array)) {
        sort(sorted_array.begin(), sorted_array.end());
    } else {
        sort(sorted_array.rbegin(), sorted_array.rend());
    }
    return sorted_array;
}