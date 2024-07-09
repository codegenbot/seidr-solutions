bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    vector<vector<string>> result;
    for (int i = 0; i < numbers.size(); i++) {
        string name = "";
        switch (numbers[i]) {
            case 1:
                name = "One";
                break;
            case 2:
                name = "Two";
                break;
            case 3:
                name = "Three";
                break;
            case 4:
                name = "Four";
                break;
            case 5:
                name = "Five";
                break;
            case 6:
                name = "Six";
                break;
            case 7:
                name = "Seven";
                break;
            case 8:
                name = "Eight";
                break;
            case 9:
                name = "Nine";
                break;
        }
        vector<string> v = {name};
        if (!issame(result.back(), v)) {
            result.push_back(v);
        }
    }

    return result;
}