vector<string> odd_count(vector<string> lst) {
    vector<string> res;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string str = "the number of odd elements in the string " + to_string(count) + " of the input.";
        res.push_back(str);
    }
    return res;
}