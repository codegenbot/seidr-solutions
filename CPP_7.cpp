```cpp
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    vector<string> filtered_a = filter_by_substring(a, "same");
    vector<string> filtered_b = filter_by_substring(b, "same");

    if(filtered_a.size() != filtered_b.size())
        return false;

    for(int i = 0; i < filtered_a.size(); i++) {
        string s1 = filtered_a[i];
        string s2 = filtered_b[i];
        if(s1.find("same") == string::npos || s2.find("same") == string::npos)
            continue;
        if(s1 != s2)
            return false;
    }

    return true;
}