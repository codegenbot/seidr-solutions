vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            result.push_back(to_string(num));
        }
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> output;
    for (int i = 0; i < result.size(); ++i) {
        output.push_back(names[stoi(result[i]) - 1]);
    }
    return output;
}