string result = "";
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            result += s[i];
        }
    }
    string check;
    if(result == string(result.rbegin(), result.rend())){
        check = "True";
    } else {
        check = "False";
    }
    vector<string> output = {result, check};
    return output;
}