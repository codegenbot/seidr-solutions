Here is the solution:

int count_upper(string s) {
    int count = 0;
    for(int i=0; i<s.size(); i+=2){
        if(toupper(s[i]) == 'A' || toupper(s[i]) == 'E' || toupper(s[i]) == 'I' || toupper(s[i]) == 'O' || toupper(s[i]) == 'U'){
            count++;
        }
    }
    return count;
}