bool isOdd(int num) {
    return num % 2 != 0;
}

vector<int> sort_array(vector<int> array){
    vector<int> sortedArray = array;
    if (array.empty()) {
        return sortedArray;
    }

    if (isOdd(array.front() + array.back())) {
        sort(sortedArray.begin(), sortedArray.end());
    } else {
        sort(sortedArray.rbegin(), sortedArray.rend());
    }

    return sortedArray;
}