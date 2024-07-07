Here is the solution:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (!find(c.begin(), c.end(), s[i]) != c.end()) {
            temp += s[i];
        }
    }
    bool check = true;
    int left = 0, right = temp.length() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            check = false;
            break;
        }
        left++;
        right--;
    }
    result.push_back(temp);
    result.push_back((check ? "True" : "False"));
    return result;