bool issame(vector<string> a, vector<string> b) {
    vector<string> result;
    for (string s : a) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(odd_count) + " in the string " + s + " of the input.");
    }
    return result;
}