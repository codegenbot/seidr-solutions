vector<string> by_length(vector<int> arr) {
    vector<int> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            result.push_back(i);
        }
    }

    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());

    vector<string> result_names;
    for (int i : result) {
        string name = "";
        switch (i) {
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
        result_names.push_back(name);
    }

    return result_names;
}