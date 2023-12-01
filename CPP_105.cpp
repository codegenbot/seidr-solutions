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
        switch(sortedArr[i]){
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }
    
    return result;
}