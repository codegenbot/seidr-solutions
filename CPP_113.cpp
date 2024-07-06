vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (c % 2 != 0) {
                count++;
            }
        }
        string temp = "the number of odd elements ";
        temp += to_string(count);
        temp += " in the str";
        temp += to_string(i+1);
        temp += " of the input.";
        result.push_back(temp);
    }
    return result;
}