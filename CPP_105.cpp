vector<string> by_length(vector<int> arr){
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    vector<int> valid_nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9)
            valid_nums.push_back(num);
    }

    sort(valid_nums.begin(), valid_nums.end());

    reverse(valid_nums.begin(), valid_nums.end());

    vector<string> result;
    for (int num : valid_nums) {
        result.push_back(names[num - 1]);
    }

    return result;
}