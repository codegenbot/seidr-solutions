vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sortedArr;
    map<int, string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    // Sort the integers between 1 and 9 inclusive
    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    // Reverse the sorted array and replace each digit with its corresponding name
    for(int i=sortedArr.size()-1; i>=0; i--){
        result.push_back(numToName[sortedArr[i]]);
    }

    return result;
}