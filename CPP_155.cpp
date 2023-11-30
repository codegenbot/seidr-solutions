vector<int> even_odd_count(int num){
    vector<int> result(2, 0);
    string s = to_string(abs(num));
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}