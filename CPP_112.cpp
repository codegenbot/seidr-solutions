for (int i = 0; i < c.size(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    
    string result = s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    
    if (result == rev) {
        return {result, "True"};
    } else {
        return {result, "False"};
    }
}