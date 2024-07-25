vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> numToString = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<int> numsToConvert;
    for(int num : arr){
        if(num >= 1 && num <= 9){
            numsToConvert.push_back(num);
        }
    }

    sort(numsToConvert.begin(), numsToConvert.end());
    reverse(numsToConvert.begin(), numsToConvert.end());

    for(int num : numsToConvert){
        result.push_back(numToString[num]);
    }

    return result;
}