vector<string> reverse_delete(string s, string c){
    for(auto ch : c){
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    string result = s;
    string result_reverse = s;
    reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse ? "True" : "False"};
}