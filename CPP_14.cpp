/*
Return vector of all prefixes from shortest to longest of the input string
>>> all_prefixes("abc")
{"a", "ab", "abc"}
*/

vector<string> all_prefixes(string str) {
    vector<string> result;
    string prefix;
    
    for (int i = 0; i < str.length(); i++) {
        prefix += str[i];
        result.push_back(prefix);
    }
    
    return result;
}