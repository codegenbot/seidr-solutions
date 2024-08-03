Here is the completed code:

vector<string> by_length(vector<int> arr) {
    vector<int> numVec;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numVec.push_back(i);
        }
    }
    sort(numVec.begin(), numVec.end());
    reverse(numVec.begin(), numVec.end());
    vector<string> result;
    for (int i : numVec) {
        string str = "";
        switch (i) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }
    return result;