vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> digit_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    // Sort the integers between 1 and 9 inclusive
    sort(arr.begin(), arr.end());
    
    // Reverse the resulting vector
    reverse(arr.begin(), arr.end());

    // Replace each digit by its corresponding name
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>=1 && arr[i]<=9){
            result.push_back(digit_map[arr[i]]);
        }
    }
    
    return result;
}