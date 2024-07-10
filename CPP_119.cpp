Here is the completed code:

string match_parens(vector<string> lst){
    int open = 0;
    int close = 0;

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].find('(') != string::npos)
            open++;
        else
            close++;

        if (open > close || (close - open + 1 > 0))
            return "No";
    }

    return open == close ? "Yes" : "No";
}