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
        if (!flag) {
            temp += x;
        }
    }
    vector<string> result;
    string str1 = temp;
    reverse(str1.begin(), str1.end());
    string str2 = temp;
    if (str1 == str2)
        result.push_back("True");
    else
        result.push_back("False");
    result.push_back(temp);
    return result;
}