vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char i : s) {
        bool found = false;
        for (char j : c) {
            if (i == j) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += i;
        }
    }
    
    string reverseStr = temp;
    reverse(str, begin() + 0, end());
    
    result.push_back(temp);
    result.push_back((temp == reverseStr) ? "True" : "False");
    return result;
}