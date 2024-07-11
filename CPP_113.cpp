vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string str : lst) {
        int oddCount = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        string res = "the number of odd elements " + to_string(oddCount) + "n the str" + to_string(oddCount) + "ng " + str + " of the " + to_string(oddCount) + "nput.";
        result.push_back(res);
    }
    return result;
}