string make_palindrome(string str){
    int n = str.size();
    string revStr = string(str.rbegin(), str.rend());
    string temp = str + "$" + revStr;
    int lps[temp.size()] = {0};
    int len = 0, i = 1;
    while (i < temp.size()) {
        if (temp[i] == temp[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    string prefix = str.substr(lps[temp.size() - 1]);
    return str + string(prefix.rbegin(), prefix.rend());
}