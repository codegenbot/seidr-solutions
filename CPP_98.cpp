int count_upper(string s) {
    int count = 0;
    for(int i=1; i<s.size(); i++) {
        if(i%2==0 && (s[i-1] >= 'A' && s[i-1] <= 'E') || (s[i-1] >= 'A' && s[i-1] <= 'U')) {
            count++;
        }
    }
    return count;
}