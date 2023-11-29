vector<string> by_length(vector<int> arr){
    vector<int> sorted;
    vector<string> result;
    map<int, string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    // Sort the integers between 1 and 9 inclusive
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            sorted.push_back(arr[i]);
        }
    }
    sort(sorted.begin(), sorted.end());

    // Reverse the resulting vector
    reverse(sorted.begin(), sorted.end());

    // Replace each digit by its corresponding name
    for (int i = 0; i < sorted.size(); i++) {
        result.push_back(numToName[sorted[i]]);
    }

    return result;
}