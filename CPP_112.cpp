vector<string> result;
    string temp;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            temp.push_back(ch);
        }
    }
    string revTemp = temp;
    reverse(revTemp.begin(), revTemp.end());
    result.push_back(temp);
    result.push_back(temp == revTemp ? "True" : "False");
    return result;