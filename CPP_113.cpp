vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string res = "the number of odd elements ";
        res += to_string(count);
        res += "n the str";
        res += to_string(count);
        res += "ng ";
        res += to_string(count);
        res += " of the ";
        res += to_string(count);
        res += "nput.";
        result.push_back(res);
    }
    return result;
}