vector<int> sort_array(vector<int> array){
    if(array.empty()) return array;

    int sum = array[0] + array[array.size()-1];
    bool isOdd = (sum % 2 != 0);

    if(isOdd) {
        std::sort(array.begin(), array.end());
    } else {
        std::sort(array.begin(), array.end(), std::greater<int>());
    }

    return array;
}