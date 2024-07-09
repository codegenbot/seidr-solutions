bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    
    if (!s.equals(flip(s))) return false;
    
    int sum = 0;
    for (int i : q) sum += i;
    
    return sum <= w;
}

string flip(string s) {
    string rev = "";
    for(int i=s.length()-1; i>=0; i--) {
        rev += s[i];
    }
    return rev;
}