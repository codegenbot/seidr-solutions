vector<string> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numbers.push_back(i);
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    vector<string> result;
    map<int, string> number_names = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                      {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                      {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : numbers) {
        result.push_back(number_names[i]);
    }
    return result;
}