bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    
    bool is_palindromic = false;
    if (!str.empty()) {
        is_palindromic = true;
        for (int i = 0; i < str.length() / 2; i++) {
            if (str[i] != str[str.length() - i - 1]) {
                is_palindromic = false;
                break;
            }
        }
    }
    
    return is_palindromic && q.size() <= w;
}