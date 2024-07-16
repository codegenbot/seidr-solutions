vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string s : lst) {
        int count_odd = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count_odd++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count_odd) + "n the str" + to_string(count_odd) + "ng " + s + " of the " + to_string(count_odd) + "nput.");
    }
    return result;
}