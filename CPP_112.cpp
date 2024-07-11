vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char i : s) {
        bool flag = false;
        for (char j : c) {
            if (i == j) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            temp += i;
        }
    }
    result.push_back(temp);
    string reversed = "";
    for (int i = temp.length() - 1; i >= 0; i--) {
        reversed += temp[i];
    }
    if (temp == reversed) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}