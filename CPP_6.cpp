vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int max_depth = 0;
    int cur_depth = 0;
    for(char c : paren_string){
        if(c == '('){
            cur_depth++;
            max_depth = max(max_depth, cur_depth);
        } else if(c == ')'){
            cur_depth--;
        } else if(c == ' '){
            depths.push_back(max_depth);
            max_depth = 0;
            cur_depth = 0;
        }
    }
    depths.push_back(max_depth);
    return depths;
}