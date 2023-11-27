vector<string> reverse_delete(string s, string c){
    vector<string> result;
    string finalString = "";

    for(int i = 0; i < s.length(); i++){
        if(c.find(s[i]) == string::npos){
            finalString += s[i];
        }
    }

    string reversedString = finalString;
    reverse(reversedString.begin(), reversedString.end());

    if(finalString == reversedString){
        result.push_back(finalString);
        result.push_back("True");
    } else {
        result.push_back(finalString);
        result.push_back("False");
    }

    return result;
}