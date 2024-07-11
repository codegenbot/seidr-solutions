bool correct_bracketing(string brackets){
    stack<char> s;
    for(char c : brackets){
        if(c == '<') s.push('<');
        else if(c == '>'){
            if(s.empty() || s.top() != '<') return false;
            s.pop();
        }
    }
    return s.empty();
}