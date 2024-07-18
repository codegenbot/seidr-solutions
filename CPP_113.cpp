vector<string> odd_count(vector<string> lst){
    vector<string> res;
    for (string str : lst) {
        int oddCount = 0;
        for (char c : str) {
            if ((c - '0') % 2 == 1) {
                oddCount++;
             }
        }
        string newStr = "the number of odd elements " + to_string(oddCount) + "n the str" + to_string(oddCount) + "ng " + str + " of the " + to_string(oddCount) + "nput.";
        res.push_back(newStr);
    }
    return res;
}