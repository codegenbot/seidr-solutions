vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        int oddCount = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + "n the str" + to_string(oddCount) + "ng " + s + " of the " + to_string(oddCount) + "nput.");
    }
    return result;
}