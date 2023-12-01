vector<string> by_length(vector<int> arr){
    vector<int> sortedArr;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    
    vector<string> result;
    map<int, string> numberMap = {
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
        result.push_back(numberMap[sortedArr[i]]);
    }
    
    return result;
}