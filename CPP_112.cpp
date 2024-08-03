Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool flag = false;
        for (char cc : c) {
            if (ch == cc) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string revTemp = temp;
    reverse(revTemp.begin(), revTemp.end());
    result.push_back((temp == revTemp) ? "True" : "False");
    return result;
}