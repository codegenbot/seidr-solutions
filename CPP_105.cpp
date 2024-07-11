vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> validIntegers;
    map<int, string> intToString = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"},
        {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            validIntegers.push_back(num);
        }
    }

    sort(validIntegers.begin(), validIntegers.end());
    reverse(validIntegers.begin(), validIntegers.end());

    for (int num : validIntegers) {
        result.push_back(intToString[num]);
    }

    return result;
}