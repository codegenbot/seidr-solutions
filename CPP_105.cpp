vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> num_to_str = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    sort(arr.begin(), arr.end());
    arr.erase(remove_if(arr.begin(), arr.end(), [](int x) { return x < 1 || x > 9; }), arr.end());
    reverse(arr.begin(), arr.end());

    for(int num : arr){
        result.push_back(num_to_str[num]);
    }

    return result;
}