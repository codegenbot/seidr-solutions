vector<string> reverse_delete(string s, string c){
    string result = s;
    for(char ch : c){
        result.erase(remove(result.begin(), result.end(), ch), result.end());
    }
    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    bool is_palindrome = (result == reversed_result);
    vector<string> v;
    v.push_back(result);
    if(is_palindrome){
        v.push_back("True");
    }else{
        v.push_back("False");
    }
    return v;
}