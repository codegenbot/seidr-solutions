vector<string> by_length(vector<int> arr) {
    vector<string> digit_names = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> result;

    sort(arr.begin(), arr.end());
    arr.erase(remove_if(arr.begin(), arr.end(), [](int x) { return x < 1 || x > 9; }), arr.end());
    reverse(arr.begin(), arr.end());

    for (int num : arr) {
        result.push_back(digit_names[num]);
    }
    
    return result;
}