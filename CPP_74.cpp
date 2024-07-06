bool issame(const string& str1, const string& str2) {
    if(str1.length() != str2.length()) return false;
    for(int i=0; i<str1.length(); i++) {
        if(tolower(str1[i]) != tolower(str2[i])) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const auto& str : lst1) {
        sum1 += str.length();
    }

    int sum2 = 0;
    for (const auto& str : lst2) {
        sum2 += str.length();
    }

    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else {
        vector<string> result;
        for(const auto& str1:lst1) {
            bool match = false;
            for(const auto& str2:lst2) {
                if(issame(str1, str2)) {
                    match = true;
                    break;
                }
            }
            if(match) result.push_back(str1);
        }
        return result;
    }
}