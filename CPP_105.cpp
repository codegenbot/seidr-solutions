vector<string> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    vector<string> result;
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                     {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                     {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int num : numbers) {
        result.push_back(numberNames[num]);
    }
    return result;
}