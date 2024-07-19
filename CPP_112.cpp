string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    vector<string> ans;
    ans.push_back(result);
    ans.push_back(result == temp ? "True" : "False");
    return ans;
}