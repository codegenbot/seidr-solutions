vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> digit_names = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                    {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    vector<int> filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }
    sort(filtered.begin(), filtered.end());
    reverse(filtered.begin(), filtered.end());
    for (int num : filtered) {
        result.push_back(digit_names[num]);
    }
    return result;
}