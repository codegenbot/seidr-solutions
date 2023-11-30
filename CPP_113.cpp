vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for(string str : lst) {
        int count = 0;
        for(char c : str) {
            if((c - '0') % 2 != 0) {
                count++;
            }
        }
        string s = "the number of odd elements in the string " + to_string(count) + " of the input.";
        result.push_back(s);
    }
    return result;
}