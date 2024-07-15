vector<string> by_length(vector<int> arr){
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    vector<int> validIntegers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            validIntegers.push_back(num);
        }
    }

    sort(validIntegers.begin(), validIntegers.end());

    vector<int> reversedValidIntegers(validIntegers.rbegin(), validIntegers.rend());

   
    vector<string> result;
    for (int num : reversedValidIntegers) {
        result.push_back(names[num - 1]);
    }

    return result;
}