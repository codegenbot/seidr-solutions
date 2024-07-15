vector<string> by_length(vector<int> arr){
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> result;
    vector<int> sortedArr;

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sortedArr.push_back(num);
        }
    }

    sort(sortedArr.begin(), sortedArr.end());

    reverse(sortedArr.begin(), sortedArr.end());

    for (int num : sortedArr) {
        result.push_back(names[num - 1]);
    }

    return result;
}