Here is the completed code:

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
    result.push_back(temp);
    string reversed = temp;
    reverse(reversed.begin(), reversed.end());
    result.push_back((temp == reversed) ? "True" : "False");
    return result;
}