vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sortedArr;

    // Sort the integers that are between 1 and 9 inclusive
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    // Reverse the resulting vector
    reverse(sortedArr.begin(), sortedArr.end());

    // Replace each digit by its corresponding name
    map<int, string> digitToName = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    for(int i = 0; i < sortedArr.size(); i++){
        result.push_back(digitToName[sortedArr[i]]);
    }

    return result;
}