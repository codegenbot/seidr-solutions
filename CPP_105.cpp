vector<string> by_length(vector<int> arr){
    vector<int> filtered;
    map<int, string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"},
        {9, "Nine"}
    };

    // Filter numbers between 1 and 9 inclusive
    for(int num : arr) {
        if(num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }

    // Sort and reverse the filtered vector
    sort(filtered.begin(), filtered.end());
    reverse(filtered.begin(), filtered.end());

    // Replace each digit with its corresponding name
    vector<string> result;
    for(int num : filtered) {
        result.push_back(num_to_name[num]);
    }

    return result;
}