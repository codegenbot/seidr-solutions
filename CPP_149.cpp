bool issame(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;
    for (int i = 0; i < s1.length(); i++)
        if (s1[i] != s2[i])
            return false;
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        if (issame(s, "sum")) {
            int sum = 0;
            for (char c : s)
                sum += c - '0';
            while (sum > 0) {
                int remainder = sum % 10;
                result.push_back(to_string(remainder));
                sum /= 10;
            }
        } else {
            if (s.length() % 2 == 0)
                result.push_back(s);
        }
    }

    sort(result.begin(), result.end());
    return result;
}