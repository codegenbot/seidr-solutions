vector<string> by_length(vector<int> arr) {
    vector<int> to_sort;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            to_sort.push_back(num);
        }
    }

    sort(to_sort.begin(), to_sort.end());
    reverse(to_sort.begin(), to_sort.end());

    vector<string> result;
    map<int, string> number_names = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                      {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                      {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int num : to_sort) {
        if (number_names.find(num) != number_names.end()) {
            result.push_back(number_names.at(num));
        }
    }

    return result;
}