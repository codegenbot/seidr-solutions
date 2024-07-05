vector<int> sort_array(vector<int> array){
    if(array.empty()) return array;

    vector<int> result = array;
    int first = array.front();
    int last = array.back();
    int sum = first + last;

    if(sum % 2 == 0) {
        sort(result.rbegin(), result.rend());
    } else {
        sort(result.begin(), result.end());
    }

    return result;
}