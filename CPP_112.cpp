vector<string> reverse_delete(string s,string c){
    string result = "";

    // Delete characters in s that are equal to any character in c
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }

    // Check if the result string is palindrome
    string reverse = result;
    reverse(result.begin(), result.end());

    // Return vector containing the result string and palindrome check
    vector<string> output;
    output.push_back(result);
    output.push_back(result == reverse ? "True" : "False");

    return output;
}