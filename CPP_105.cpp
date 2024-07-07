vector<string> by_length(vector<int> arr) {
    vector<int> numVec; // store numbers between 1 and 9
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9)
            numVec.push_back(arr[i]);
    }

    sort(numVec.begin(), numVec.end()); // sort the numbers

    vector<string> result;
    for (int i = 0; i < numVec.size(); i++) {
        string str = "";
        switch (numVec[i]) {
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

    reverse(result.begin(), result.end()); // reverse the vector

    return result;
}