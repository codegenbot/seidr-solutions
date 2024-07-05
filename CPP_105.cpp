vector<string> by_length(vector<int> arr) {
    vector<string> result;
    vector<int> filtered;

    // Filtering numbers between 1 and 9 inclusive
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }

    // Sorting and then reversing
    sort(filtered.begin(), filtered.end());
    reverse(filtered.begin(), filtered.end());

    // Mapping of digits to their corresponding names
    map<int, string> digit_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    // Converting digits to names
    for (int num : filtered) {
        result.push_back(digit_to_name[num]);
    }

    return result;
}