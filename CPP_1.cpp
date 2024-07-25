bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        string str1 = a[i];
        string str2 = b[i];
        if (str1.length() != str2.length())
            return false;
        int count = 0, j = 0;
        while (j < str1.length()) {
            if (str1[j] == '(')
                count++;
            else if (str1[j] == ')')
                count--;
            j++;
        }
        if (count != 0)
            return false;
    }
    return true;
}