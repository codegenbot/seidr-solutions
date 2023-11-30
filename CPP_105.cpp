vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> digitMap;
    digitMap[1] = "One";
    digitMap[2] = "Two";
    digitMap[3] = "Three";
    digitMap[4] = "Four";
    digitMap[5] = "Five";
    digitMap[6] = "Six";
    digitMap[7] = "Seven";
    digitMap[8] = "Eight";
    digitMap[9] = "Nine";

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            result.push_back(digitMap[arr[i]]);
        }
    }

    return result;
}