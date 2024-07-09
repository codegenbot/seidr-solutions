vector<string> by_length(vector<int> arr){
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<int> sorted_filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_filtered.push_back(num);
        }
    }
    sort(sorted_filtered.begin(), sorted_filtered.end());
    reverse(sorted_filtered.begin(), sorted_filtered.end());
    vector<string> result;
    for (int num : sorted_filtered) {
        result.push_back(names[num - 1]);
    }
    return result;
}