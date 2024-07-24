vector<string> by_length(vector<int> arr) {
    vector<int> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(i);
        }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<string> result;
    for (int i : temp) {
        string num = "";
        switch (i) {
            case 1:
                num = "One";
                break;
            case 2:
                num = "Two";
                break;
            case 3:
                num = "Three";
                break;
            case 4:
                num = "Four";
                break;
            case 5:
                num = "Five";
                break;
            case 6:
                num = "Six";
                break;
            case 7:
                num = "Seven";
                break;
            case 8:
                num = "Eight";
                break;
            case 9:
                num = "Nine";
                break;
        }
        result.push_back(num);
    }
    return result;
}