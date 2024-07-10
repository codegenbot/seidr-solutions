vector<string> by_length(vector<int> arr) {
    vector<int> num_arr; // store numbers between 1 and 9
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            num_arr.push_back(i);
        }
    }

    sort(num_arr.begin(), num_arr.end());
    reverse(num_arr.begin(), num_arr.end());

    vector<string> result;
    for (int i : num_arr) {
        switch (i) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }

    return result;
}