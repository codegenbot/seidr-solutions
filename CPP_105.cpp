vector<string> by_length(vector<int> arr) {
    vector<int> sortedArr;
    vector<string> result;
    map<int, string> digitName;
    digitName[1] = "One";
    digitName[2] = "Two";
    digitName[3] = "Three";
    digitName[4] = "Four";
    digitName[5] = "Five";
    digitName[6] = "Six";
    digitName[7] = "Seven";
    digitName[8] = "Eight";
    digitName[9] = "Nine";

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            sortedArr.push_back(arr[i]);
        }
    }

    sort(sortedArr.begin(), sortedArr.end());

    reverse(sortedArr.begin(), sortedArr.end());

    for (int i = 0; i < sortedArr.size(); i++) {
        result.push_back(digitName[sortedArr[i]]);
    }

    return result;
}