Here is the completed code:

vector<string> reverse_delete(string s, string c) {
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
    string reverse = temp;
    reverse.resize(reverse.size());
    std::reverse(reverse.begin(), reverse.end());
    vector<string> result;
    result.push_back(reverse);
    result.push_back((temp == reverse) ? "True" : "False");
    return result;
}