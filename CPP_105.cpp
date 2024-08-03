vector<string> by_length(vector<int> arr) {
    vector<int> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> output;
    for (int num : result) {
        output.push_back(names[num - 1]);
    }
    return output;
}