Here is the solution:

int count_upper(string s){
    int count = 0;
    for(int i = 1; i < s.length(); i=i+2) {
        if(isupper(s[i])) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                count++;
            }
        }
    }
    return count;
}