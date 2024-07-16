for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    string rev = s;
    reverse(rev.begin(), rev.end());
    return {s, (s == rev) ? "True" : "False"};
}