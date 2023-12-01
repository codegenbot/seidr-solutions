vector<string> by_length(vector<int> arr){
    map<int, string> numToName;
    numToName[1] = "One";
    numToName[2] = "Two";
    numToName[3] = "Three";
    numToName[4] = "Four";
    numToName[5] = "Five";
    numToName[6] = "Six";
    numToName[7] = "Seven";
    numToName[8] = "Eight";
    numToName[9] = "Nine";
    
    vector<string> result;
    vector<int> sortedArr;
    
    for(int num : arr){
        if(num >= 1 && num <= 9){
            sortedArr.push_back(num);
        }
    }
    
    sort(sortedArr.begin(), sortedArr.end());
    
    reverse(sortedArr.begin(), sortedArr.end());
    
    for(int num : sortedArr){
        result.push_back(numToName[num]);
    }
    
    return result;
}