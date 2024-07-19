Here is the completed code:

string match_parens(vector<string> lst){
    int open = 0;
    int close = 0;
    for(auto str : lst){
        for(auto c : str){
            if(c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}