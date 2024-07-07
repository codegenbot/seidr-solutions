vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y) {
                flag = true;
                break;
            }
        }
        if (!flag)
            temp += x;
    }
    result.push_back(temp);
    string rev = temp;
    reverse(rev.begin(), rev.end());
    result.push_back((rev == temp) ? "True" : "False");
    return result;
}