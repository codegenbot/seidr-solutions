vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"},
        {4, "Four"}, {5, "Five"}, {6, "Six"},
        {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<int> sorted_nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_nums.push_back(num);
        }
    }

    sort(sorted_nums.begin(), sorted_nums.end());
    reverse(sorted_nums.begin(), sorted_nums.end());

    for (int num : sorted_nums) {
        result.push_back(num_to_name[num]);
    }

    return result;
}