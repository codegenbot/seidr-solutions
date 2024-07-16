vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string str = "the number of odd elements ";
        str += to_string(count);
        str += "n the str";
        str += to_string(count);
        str += "ng ";
        str += to_string(count);
        str += " of the ";
        str += to_string(count);
        str += "nput.";
        result.push_back(str);
    }
    return result;
}