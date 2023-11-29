vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> numberMap;
    numberMap[1] = "One";
    numberMap[2] = "Two";
    numberMap[3] = "Three";
    numberMap[4] = "Four";
    numberMap[5] = "Five";
    numberMap[6] = "Six";
    numberMap[7] = "Seven";
    numberMap[8] = "Eight";
    numberMap[9] = "Nine";

    sort(arr.begin(), arr.end());

    vector<int> filteredArr;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            filteredArr.push_back(arr[i]);
        }
    }

    reverse(filteredArr.begin(), filteredArr.end());

    for (int i = 0; i < filteredArr.size(); i++) {
        result.push_back(numberMap[filteredArr[i]]);
    }

    return result;
}