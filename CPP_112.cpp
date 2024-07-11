for(auto it = s.begin(); it != s.end();){
        if(c.find(*it) != string::npos){
            it = s.erase(it);
        } else {
            ++it;
        }
    }
    string temp = s;
    reverse(temp.begin(), temp.end());
    return {s, s == temp ? "True" : "False"};
}