vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string num = to_string(count);
        string res = "the number of odd elements " + num + "n the str" + num + "ng " + s + " of the " + num + "nput.";
        result.push_back(res);
    }
    return result;
}