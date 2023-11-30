vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sortedArr;
    
    // Sort the integers between 1 and 9
    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());
    
    // Reverse the sorted array and replace each digit by its corresponding name
    for(int i=sortedArr.size()-1; i>=0; i--){
        string name;
        switch(sortedArr[i]){
            case 1:
                name = "One";
                break;
            case 2:
                name = "Two";
                break;
            case 3:
                name = "Three";
                break;
            case 4:
                name = "Four";
                break;
            case 5:
                name = "Five";
                break;
            case 6:
                name = "Six";
                break;
            case 7:
                name = "Seven";
                break;
            case 8:
                name = "Eight";
                break;
            case 9:
                name = "Nine";
                break;
        }
        result.push_back(name);
    }
    
    return result;
}