vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> numToName = {
        {1, "One"}, {2, "Two"}, {3, "Three"},
        {4, "Four"}, {5, "Five"}, {6, "Six"},
        {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<int> filteredArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filteredArr.push_back(num);
        }
    }

    sort(filteredArr.begin(), filteredArr.end());
    reverse(filteredArr.begin(), filteredArr.end());

    for (int num : filteredArr) {
        result.push_back(numToName[num]);
    }

    return result;
}