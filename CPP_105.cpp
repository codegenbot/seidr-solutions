vector<string> by_length(vector<int> arr) {
    vector<int> temp;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            temp.push_back(num);
        }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<string> result;
    for (int num : temp) {
        string s = "";
        switch (num) {
            case 1:
                s = "One";
                break;
            case 2:
                s = "Two";
                break;
            case 3:
                s = "Three";
                break;
            case 4:
                s = "Four";
                break;
            case 5:
                s = "Five";
                break;
            case 6:
                s = "Six";
                break;
            case 7:
                s = "Seven";
                break;
            case 8:
                s = "Eight";
                break;
            case 9:
                s = "Nine";
                break;
        }
        result.push_back(s);
    }
    return result;
}